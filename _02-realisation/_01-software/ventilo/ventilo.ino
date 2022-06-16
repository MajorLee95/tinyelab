// http://digistump.com/wiki/digispark/tutorials/basics


void setup() {

pinMode(0, OUTPUT);
pinMode(1, OUTPUT); // for pwms

analogWrite( 0, 128);
analogWrite( 1, 128);


}

void loop() {
	delay(1);
	//ventilo
	int val = analogRead(1); //Read P2
	int pwm = map( val, 0,1023, 0, 255);
	analogWrite(0, pwm);
	
	//LEDs
	val = analogRead(3); //Read P3
	pwm = map( val, 0,1023, 0, 255);
	analogWrite(1, pwm); 
}