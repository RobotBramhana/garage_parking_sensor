#include "display.h"
#include "sonar.h"
#include <math.h>
#pragma once
class GarageParking: protected SevenSegmentDisplay, protected Sonar
{
public:
GarageParking(){
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN,LOW);
  Serial.print(__func__);
  Serial.print(" : Sonar supply is enabled? ");
  Serial.println(digitalRead(SONAR_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.print(" : Sonar ground is enabled? ");
  Serial.println(!digitalRead(SONAR_GND)?"Yes":"No");
  
  Serial.print(__func__);
  Serial.print(" DISPLAY_SUPPLY enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
}

void check_distance(){
  // delay(SONAR_PING_DELAY_MILLISECONDS);
  auto distance_inches=ping_in();
  Serial.print(__func__);
  	Serial.print(" Distance = ");
  Serial.print(distance_inches);
	Serial.println(" inches");
if(distance_inches<10){
digitalWrite(DISPLAY_SUPPLY,HIGH);
if(distance_inches<4){
  digitalWrite(BUZZER_PIN,HIGH);
}
display(distance_inches);  
}else{
  digitalWrite(DISPLAY_SUPPLY,LOW);
  
}	
}
};