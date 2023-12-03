/**
 * @file garage_parking.h
 * @author Sudhanva S (pioneer.sudhu+robotics@gmail.com)
 * @brief Headerfile that integrates sonar, seven segment display and other modules of the system
 * @version 0.1
 * @date 2023-12-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "display.h"
#include "sonar.h"
#include <math.h>
#pragma once

/**
 * @brief Class that inherits @class SevenSegmentDisplay and @class Sonar
 * 
 */
class GarageParking : protected SevenSegmentDisplay, protected Sonar
{
public:
  /**
 * @brief Construct a new Garage Parking object
 * 
 */
  GarageParking()
  {
    pinMode(BUZZER_PIN, OUTPUT);
    digitalWrite(BUZZER_PIN, LOW);
    Serial.print(__func__);
    Serial.print(" : Sonar supply is enabled? ");
    Serial.println(digitalRead(SONAR_SUPPLY) ? "Yes" : "No");
    Serial.print(__func__);
    Serial.print(" : Sonar ground is enabled? ");
    Serial.println(!digitalRead(SONAR_GND) ? "Yes" : "No");

    Serial.print(__func__);
    Serial.print(" DISPLAY_SUPPLY enabled? ");
    Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
  }

  /**
 * @brief Queries sonar and displays the digit on seven segment display if the distance is less than 9 inches
 * @todo Provide visual feedback to indicate that the wall is beyond 9 inches
 * @todo Provide acoustic feedback to indicate that the wall is too near
 */
  void check_distance()
  {
    // delay(SONAR_PING_DELAY_MILLISECONDS);
    auto distance_inches = ping_in();
    Serial.print(__func__);
    Serial.print(" Distance = ");
    Serial.print(distance_inches);
    Serial.println(" inches");
    if (distance_inches < 10)
    {
      digitalWrite(DISPLAY_SUPPLY, HIGH);
      if (distance_inches < 4)
      {
        digitalWrite(BUZZER_PIN, HIGH);
      }
      display(distance_inches);
    }
    else
    {
      digitalWrite(DISPLAY_SUPPLY, LOW);
    }
  }
};
