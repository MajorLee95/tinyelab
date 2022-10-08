#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <stdio.h>

// Scanner I2C avec affichage sur écran OLED mais l'affichage est facillement adaptable

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

void setup()   {                
	// Serial.begin(9600);
	
	byte adresse = 0;
	byte resultat;
	byte nb_existe = 0;
	
	display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
	
	display.clearDisplay();
	
	display.setTextSize(1);
	display.setTextColor(WHITE);
	display.setCursor(0,0);
	
	display.println("Hello, I2C scan");
	// display.println("31kHz");
	display.display();
	delay(2000);
	display.clearDisplay();
	display.display();

	display.setCursor(0,0);
	for (adresse = 1; adresse < 128; adresse++ ){
		Wire.beginTransmission(adresse);    /* Commence une transmission a l'adresse indiquee */
		resultat = Wire.endTransmission();
		if (resultat == 0){
			display.print("0x");
			display.print( adresse, HEX) ;
			display.print( " " ) ;
			display.display();
			nb_existe++;
		}
	}
	if ( nb_existe == 0){
		display.print( "Pas de composants trouves ") ;
		display.display();
	}
	display.println() ;
	display.println("Fin du scan") ;
	display.display();

	
}

void loop(){

	
}