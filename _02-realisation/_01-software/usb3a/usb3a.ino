#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <stdio.h>
#include <Adafruit_INA219.h>

#define CONSIGNE_TEMP A0

// pwm ventilo abandonné
#define VENTILO_OUT 3 //pin2

Adafruit_INA219 ina219;
Adafruit_INA219 ina219_2(0x41);

// 2 adresse 0x40 et 0x41

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

#define LM35_1 A0
#define LM35_2 A1

void setup()   {                
	// Serial.begin(115200);
	display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
	
	ina219.begin();
	ina219_2.begin();
	
	display.clearDisplay();
	
	display.setTextSize(2);
	display.setTextColor(WHITE);
	display.setCursor(0,0);
	display.println("VoRoBoTics");
	display.println("Tiny e-lab");
	
	//               123456789012345678901
	// display.println("31kHz");
	display.display();
	delay(4000);
	display.clearDisplay();
	display.display();
	display.setTextSize(1);
	
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
	
	int temp1 = int( float(analogRead( LM35_1 ) ) * 500.0/1023.0);
	int temp2 = int( float(analogRead( LM35_2 ) ) * 500.0/1023.0);
	// Serial.print("Valeur brute :" );
	// Serial.println(temp1);
	
	
	shuntvoltage = ina219_2.getShuntVoltage_mV();
	busvoltage = ina219_2.getBusVoltage_V();
	current_A = -ina219_2.getCurrent_mA()/1050;// inversion du sens après essais ;-)
	loadvoltage = busvoltage + (shuntvoltage / 1000);
	
	
	//CH2 en haut ! Inattention au moment du cablage !
	// On aurait pu les appeler A et B avec A = CH2 mais bon
	dtostrf(loadvoltage,2,2,tmp_u);
	dtostrf(current_A,2,2,tmp_i);
	display.setCursor(0,6);
	//display.setCursor(0,20);
	sprintf( ligne, "CH2 %sV %sA %d C", tmp_u, tmp_i, temp2 );
	display.println(ligne);
	// display.setCursor(0,9); // avce les println seuls c'est un peu trop serré
	//display.println("Temp : "); // pour la température
	
	shuntvoltage = ina219.getShuntVoltage_mV();
	busvoltage = ina219.getBusVoltage_V();
	current_A = -ina219.getCurrent_mA()/1050; // inversion du sens après essais ;-)
	loadvoltage = busvoltage + (shuntvoltage / 1000);
	
	dtostrf(loadvoltage,2,2,tmp_u);
	dtostrf(current_A,2,2,tmp_i);
	display.setCursor(0,24);
	sprintf( ligne, "CH1 %sV %sA %d C", tmp_u, tmp_i, temp1 );
	display.println(ligne);
	// display.setCursor(0,27);
	//display.println("Temp :"); // pour la température

	display.display();
	
	delay (200);
	display.clearDisplay();
	
	// int val = analogRead( A0 ); //Read P2
	// int pwm = map( val, 0,1023, 0, 255);
	// analogWrite( VENTILO_OUT , pwm);
	
}