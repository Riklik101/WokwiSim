#include <Servo.h>

Servo myservo;
const int AlpPot = A0;
const int AlpPie = 8;
const int ButtonA = 7;
int timer = 0;
int pos = 0;
int timeDelay = 5000;
void setup() {
  myservo.attach(9);
  pinMode(AlpPot, INPUT);
  pinMode(ButtonA, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  for (True){
  for (pos = 0; pos <= 180; pos += 1){
    myservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }}
  */
  
  int SensorValue = analogRead(AlpPot); //potentiometer val read
  float voltage = SensorValue * (5.0 / 1023.0); // convert resistance to voltage
  float newPos = SensorValue * (180.0 /1023); // servo only accepts 180 deg input
  myservo.write(newPos);
  if (ButtonA = HIGH){
    timer = millis();
  } else if (timer >= timeDelay){
    timer = millis();
    while (timer < timeDelay){
      tone()
    }
  }

  Serial.println("Voltage is: " + String(voltage));
  Serial.println("Position is: " + String(newPos));
  Serial.println("Sensor Val is: " + String(pos));
  delay(15); //give servo time to move - may be unncessary
}
