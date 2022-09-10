#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <stdio.h>
#include <Adafruit_INA219.h>

#define CONSIGNE_TEMP A0
#define VENTILO_OUT 3 //pin2

Adafruit_INA219 ina219;


#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

void setup()   {                
	// Serial.begin(9600);
	display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
	
	ina219.begin();
	
	display.clearDisplay();
	
	display.setTextSize(1);
	display.setTextColor(WHITE);
	display.setCursor(0,0);
	
	display.println("Hello, pwm");
	display.println("31kHz");
	display.display();
	delay(1000);
	display.clearDisplay();
	display.display();
	TCCR2B = TCCR2B & B11111000 | B00000010; // for PWM frequency of 3921.16 Hz
	TCCR2B = TCCR2B & B11111000 | B00000001; // for PWM frequency of 31372.55 Hz
	pinMode( VENTILO_OUT, OUTPUT );
	digitalWrite( VENTILO_OUT, 0 );
	
}

void loop(){
	char ligne[22];
	char tmp_u[10];
	char tmp_i[10];
	char tmp_sv[10];
	char tmp_bv[10];	
	
	float shuntvoltage = 0;
	float busvoltage = 0;
	float current_A = 0;
	float loadvoltage = 0;
	
	shuntvoltage = ina219.getShuntVoltage_mV();
	busvoltage = ina219.getBusVoltage_V();
	current_A = ina219.getCurrent_mA()/1050;
	loadvoltage = busvoltage + (shuntvoltage / 1000);
	
	// display.setCursor(0,0);
	// dtostrf(shuntvoltage,5,2,tmp_sv);
	// dtostrf(busvoltage,5,2,tmp_bv);
	dtostrf(loadvoltage,5,2,tmp_u);
	dtostrf(current_A,5,2,tmp_i);
	// sprintf( ligne, "Shunt : %sV", tmp_sv );
	// display.println(ligne);
	// sprintf( ligne, "bus : %sV", tmp_bv );
	// display.println(ligne);	
	// sprintf( ligne, "load : %sV", tmp_u );
	// display.println(ligne);
	// sprintf( ligne, "i : %sA", tmp_i );
	// display.println(ligne);	
	// display.display();
	
	display.setCursor(0,6);
	// float u=5.232365;
	// float i=2.9569;
	// dtostrf(u,1,2,tmp_u);
	// dtostrf(i,1,2,tmp_i);
	sprintf( ligne, "CH1: %sV / %sA", tmp_u, tmp_i );
	display.println(ligne);
	
	
	// display.setCursor(0,20);
	// display.println("CH2 : 4.94v / 2.3A");
	display.display();
	
	delay (200);
	display.clearDisplay();
	
	int val = analogRead( A0 ); //Read P2
	int pwm = map( val, 0,1023, 0, 255);
	analogWrite( VENTILO_OUT , pwm);
	
}