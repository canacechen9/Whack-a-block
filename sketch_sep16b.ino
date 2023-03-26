#include<CapacitiveSensor.h>
CapacitiveSensor Sensor = CapacitiveSensor(2,11);
CapacitiveSensor Sensor2 = CapacitiveSensor(2,10);
CapacitiveSensor Sensor3 = CapacitiveSensor(2,9);
CapacitiveSensor Sensor4 = CapacitiveSensor(2,8);


long val;
int pos;
#define led 13
#define led2 A0
#define led3 A1
#define led4 A2
int ledPins[] = {led,led2,led3,led4};
int pinCount = 4;


void setup() 
{
  // put your setup code here, to run once:
 Serial.begin(9600);
  
  for (int thisPin = 0; thisPin < pinCount; thisPin++)
  {//assigning all the pins at outputs in a for loop
  pinMode(ledPins[thisPin],OUTPUT);
  }
}


void displayMole(){
  int thisPin = 0;
  while(thisPin < pinCount)
  {delay(1000);
  thisPin ++; //lighting the randomly chosen bulb
  }
}


void WhackMole(){
  unsigned long current;
  unsigned long end;
  current = millis();
  end = millis() + 500;
  while  (millis() < end)
  {
   val = Sensor.capacitiveSensor(30);
    Serial.println(val);
   int i = 0
   if(val >= 1000 && ledPins[led]==1)
   {
   digitalWrite(ledPins[led], LOW); //turn off LED
   delay(500);
   }

   else if (val < 1000 && ledPins[led]==1 ; ledPins[i] < pinCount)
   {
   i ++; //lighting another randomly chosen bulb
   delay(500);
   }
  
  val = Sensor2.capacitiveSensor(30);
    Serial.println(val);
   if(val >= 1000 && ledPins[led2]==1)
   {
   digitalWrite(ledPins[led2], LOW); //turn off LED
   pos = 0;
   delay(500);
   }

   else if(val < 1000 && ledPins[led2]==1 ; ledPins < pinCount)
   {
   ledPins ++; //lighting another randomly chosen bulb
   delay(500);
   }
  
  val = Sensor3.capacitiveSensor(30);
    Serial.println(val);
   if(val >= 1000 && ledPins[led3]==1)
   {
   digitalWrite(ledPins[led3], LOW); //turn off LED
   delay(500);
   }

   else if(val < 1000 && ledPins[led3]==1 ; ledPins < pinCount)
   {
   ledPins ++; //lighting another randomly chosen bulb
   delay(500);
   }
  
  val = Sensor4.capacitiveSensor(30);
    Serial.println(val);
   if(val >= 1000 && ledPins[led4]==1)
   {
   digitalWrite(ledPins[led4], LOW); //turn off LED
   delay(500);
   }

   else if(val < 1000 && ledPins[led4]==1 ; ledPins < pinCount)
   {
   ledPins ++; //lighting another randomly chosen bulb
   delay(500);
   }
  }
}


void loop() 
{
  // put your main code here, to run repeatedly:
 displayMole();
 whackMole();
 delay(10);
}
