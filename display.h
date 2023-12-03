/**
 * @file display.h
 * @author Sudhanva S (pioneer.sudhu+robotics@gmail.com)
 * @brief Headerfile containing implementation for printing on 7 segment display.
 * @note This headerfile was written to customize, since the existing libraries did not help in displaying the digits with D5611 A/B common anode.
 * @warning This headerfile is compatible only with common anode type seven segment displays.
 * @version 0.1
 * @date 2023-12-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "constants.h"
#pragma once

/**
 * @brief Class that contains implementations for displaying digits
 * @note The class is implemented only to print 0-9 in inches
 */
class SevenSegmentDisplay
{
  /**
 * @brief Clears all the segments on seven segment display
 * 
 */
  void clear()
  {
    for (int i = A; i <= DP; i++)
      digitalWrite(i, HIGH);
  }

  /**
 * @brief Turns on the segments as requested in the function parameter
 * 
 * @param pins vector containing list of segments to be turned on
 */
  void display(arx::vector<int> pins)
  {
    for (auto &pin : pins)
    {
      digitalWrite(pin, LOW);
    }
  }

public:
  /**
 * @brief Construct a new Seven Segment Display object
 * 
 */
  SevenSegmentDisplay()
  {
    pinMode(DISPLAY_SUPPLY, OUTPUT);
    digitalWrite(DISPLAY_SUPPLY, LOW);
    for (int i = A; i <= DP; i++)
      pinMode(i, OUTPUT);
    clear();
  }
  /**
 * @brief Display passed digit on the seven segment display
 * 
 * @param number to be displayed
 */
  void display(int number)
  {

    Serial.print(__func__);
    Serial.print(" : Display is enabled? ");
    Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");

    if (digitalRead(DISPLAY_SUPPLY))
    {
      clear();
      switch (number)
      {
      case 0:
        display(D0);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 0");

        break;
      case 1:
        display(D1);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 1");

        break;
      case 2:
        display(D2);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 2");

        break;
      case 3:
        display(D3);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 3");

        break;
      case 4:
        display(D4);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 4");

        break;
      case 5:
        display(D5);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 5");

        break;
      case 6:
        display(D6);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 6");

        break;
      case 7:
        display(D7);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 7");

        break;
      case 8:
        display(D8);

        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 8");

        break;
      case 9:
        display(D9);
        Serial.print(__func__);
        Serial.print(" : Display is enabled? ");
        Serial.println(digitalRead(DISPLAY_SUPPLY) ? "Yes" : "No");
        Serial.print(__func__);
        Serial.println(" Displayed digit 9");
        break;
      default:
        clear();
        display(DOT);
        Serial.println("Error: Not programmed");
      }
    }
  }
};
