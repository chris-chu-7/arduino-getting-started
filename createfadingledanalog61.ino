//we get the led to turn on and off really quickly at really fast intervals
//This is called pulse width modulation (PWM) , have a % of time to specify 5V, etc. 
//Amount of time pulse stays high vs low. 
//we use a resistor this time, led some wires. 
//plug anode to pin #7 in arduino. 

void setup() {
  //baud clock rate. 
  pinMode(6, OUTPUT);
}

void loop() {


  //Read analog value from pin. 

  //analog write can have vlues 0 to 255, analog read has value from 0 to 1023. 
  int potValue = analogRead(A0);


   //map value from the 0-1023 to 0-255
   int mappedValue = map(potValue, 0, 1023, 0, 255);
   
   //write this analog value to the LED
   analogWrite(6, mappedValue); 

   //pins marked with tilde (~) are the pins that are capable of producing pwm signal. 

   
}
