#include<ArxSmartPtr.h>
#pragma once
#include "NewPing.h"
#include "constants.h"

class Sonar:protected NewPing
{
  public:
Sonar():NewPing(SONAR_TRIGGER_PIN, SONAR_ECHO_PIN, SONAR_MAX_DISTANCE){ 
  pinMode(SONAR_SUPPLY, OUTPUT);
  pinMode(SONAR_GND, OUTPUT);
  digitalWrite(SONAR_GND, LOW);
  digitalWrite(SONAR_SUPPLY, HIGH);
  Serial.print(__func__);
  Serial.print(" : Sonar is enabled? ");
  Serial.println(digitalRead(SONAR_SUPPLY)?"Yes":"No");
}
};
