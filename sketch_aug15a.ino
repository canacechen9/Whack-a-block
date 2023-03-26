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

void setup() 
{
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
}

void loop() 
{
  val = Sensor.capacitiveSensor(30);
  Serial.println(val);
  if(val >= 1000 && pos==0)
  {
  digitalWrite(led, HIGH); //turn on LED
  pos = 1;
  delay(500);
  }

   else if(val>=1000&&pos==1)
  {
  digitalWrite(led, LOW); //turn of LED
  pos = 0;
  delay(500);
  }

  val = Sensor2.capacitiveSensor(30);
   Serial.println(val);
  if(val >= 1000 && pos==0)
  {
  digitalWrite(led2, HIGH); //turn on LED2
  pos = 1;
  delay(500);
  }

  else if(val>=1000&&pos==1)
  {
  digitalWrite(led2, LOW); //turn of LED
  pos = 0;
  delay(500);
  }

   val = Sensor3.capacitiveSensor(30);
   Serial.println(val);
  if(val >= 1000 && pos==0)
  {
  digitalWrite(led3, HIGH); //turn on LED2
  pos = 1;
  delay(500);
  }

  else if(val>=1000&&pos==1)
  {
  digitalWrite(led3, LOW); //turn of LED
  pos = 0;
  delay(500);
  }

val = Sensor4.capacitiveSensor(30);
   Serial.println(val);
  if(val >= 1000 && pos==0)
  {
  digitalWrite(led4, HIGH); //turn on LED2
  pos = 1;
  delay(500);
  }

  else if(val>=1000&&pos==1)
  {
  digitalWrite(led4, LOW); //turn of LED
  pos = 0;
  delay(500);
  }

 
  
  delay(10);
}
