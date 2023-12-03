/**
 * @file sonar.h
 * @author Sudhanva S (pioneer.sudhu+robotics@gmail.com)
 * @brief Headerfile that contains modularized code for fetching input from sonar
 * @version 0.1
 * @date 2023-12-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <ArxSmartPtr.h>
#pragma once
#include "NewPing.h"
#include "constants.h"

/**
 * @brief NewPing is inherited by Sonar class to add more functionality and also to fulfil requirements.
 * @note Inherited as protected on purpose.
 */
class Sonar : protected NewPing
{
public:
  /**
 * @brief Construct a new Sonar object
 * 
 */
  Sonar() : NewPing(SONAR_TRIGGER_PIN, SONAR_ECHO_PIN, SONAR_MAX_DISTANCE)
  {
    pinMode(SONAR_SUPPLY, OUTPUT);
    pinMode(SONAR_GND, OUTPUT);
    digitalWrite(SONAR_GND, LOW);
    digitalWrite(SONAR_SUPPLY, HIGH);
    Serial.print(__func__);
    Serial.print(" : Sonar is enabled? ");
    Serial.println(digitalRead(SONAR_SUPPLY) ? "Yes" : "No");
  }
};
