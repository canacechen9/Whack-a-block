#include<CapacitiveSensor.h>
CapacitiveSensor Sensor = CapacitiveSensor(2,11);
CapacitiveSensor Sensor2 = CapacitiveSensor(2,10);
CapacitiveSensor Sensor3 = CapacitiveSensor(2,9);
CapacitiveSensor Sensor4 = CapacitiveSensor(2,8);
CapacitiveSensor Sensor5 = CapacitiveSensor(2,7);
CapacitiveSensor Sensor6 = CapacitiveSensor(2,6);
CapacitiveSensor Sensor7 = CapacitiveSensor(2,5);
CapacitiveSensor Sensor8 = CapacitiveSensor(2,4);
CapacitiveSensor Sensor9 = CapacitiveSensor(2,3);

long val;
int pos;
#define led 13
#define led2 A0
#define led3 A1
#define led4 A2
#define led5 A3
#define led6 A4
#define led7 A5
#define led8 A6
#define led9 A7

//Game variables
int rNum;   //random int choosing the random light to turn on

int ledPins[] = {led,led2,led3,led4,led5,led6,led7,led8,led9};
int pinCount = 9;


void setup() 
{
  // put your setup code here, to run once:
 Serial.begin(9600);

  for (int thisPin = 0; thisPin < pinCount; thisPin++)
  {//assigning all the pins at outputs in a for loop
  pinMode(ledPins[thisPin],OUTPUT);
  }
}

void loop() 
{
  // put your main code here, to run repeatedly:
  rNum = random(4);//generating random choice
  delay(1000);
  digitalWrite(ledPins[rNum],HIGH);//lighting the randomly chosen bulb
  
  val = Sensor.capacitiveSensor(30);
  val = Sensor2.capacitiveSensor(30);
  val = Sensor3.capacitiveSensor(30);
  val = Sensor4.capacitiveSensor(30);
  val = Sensor5.capacitiveSensor(30);
  val = Sensor6.capacitiveSensor(30);
  val = Sensor7.capacitiveSensor(30);
  val = Sensor8.capacitiveSensor(30);
  val = Sensor9.capacitiveSensor(30);
  Serial.println(val);
  
  if(val >= 1000 && pos==1)
  {
  digitalWrite(ledPins[rNum], LOW); //turn off LED
  pos = 0;
  delay(500);
  }

   else if(val >= 1000 && pos==1)
  {
   digitalWrite(ledPins[rNum],HIGH); //lighting another randomly chosen bulb
  pos = 1;
  delay(500);
  }

  delay(10);
}
