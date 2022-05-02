//connect common cathode to ground. 
//we need a current limiting resistor. 
//this is because we need to have enough resistance to prevent the current from damaging the LED/overwhelming it. 
// 220 Ohm resistors are pretty common. 
//common cathode connects to ground.
//const int red_pin = 3;

#define RED_PIN 3
#define BLUE_PIN 6
#define GREEN_PIN 5

void setup() {
  // put your setup code here, to run once:
  //initialize digital pin LED_BUILTIN as an output. 
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  //get the LED "L" to blink repeatedly.
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
  //turn led on
  delay(1000);
  //wait for a second
  digitalWrite(RED_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  delay(1000);
  digitalWrite(BLUE_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);

//COMBINE COLORS TOP ANALOG
/*analogWrite(GREEN_PIN, 50);
  analogWrite(RED_PIN, 100);   
  analogWrite(BLUE_PIN, 100);*/
  
}
