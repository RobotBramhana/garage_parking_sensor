/**
 * @file constants.h
 * @author Sudhanva S (pioneer.sudhu+robotics@gmail.com)
 * @brief This header files contains declarations and definitions of constants used across the project
 * @version 0.1
 * @date 2023-12-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <ArxContainer.h>

#pragma once

/**
 * @brief typedef for defining digits to be printed on the seven segment display
 * 
 */
typedef arx::vector<int> DIGIT;

/**
 * @brief Enumeration containing pin mapping to the segments.
 */
enum SEG
{
    A = 2,
    B,
    C,
    D,
    E,
    F,
    G,
    DP
};

/**
 * @brief Digit object for displaying 0
 * 
 */
DIGIT D0{A, B, C, D, E, F};

/**
 * @brief Digit object for displaying 1
 * 
 */
DIGIT D1{B, C};

/**
 * @brief Digit object for displaying 2
 * 
 */
DIGIT D2{A, B, G, E, D};

/**
 * @brief Digit object for displaying 3
 * 
 */
DIGIT D3{A, B, G, C, D};

/**
 * @brief Digit object for displaying 4
 * 
 */
DIGIT D4{F, G, B, C};

/**
 * @brief Digit object for displaying 5
 * 
 */
DIGIT D5{A, F, G, C, D};

/**
 * @brief Digit object for displaying 6
 * 
 */
DIGIT D6{A, C, D, E, F, G};

/**
 * @brief Digit object for displaying 7
 * 
 */
DIGIT D7{A, B, C};

/**
 * @brief Digit object for displaying 8
 * 
 */
DIGIT D8{A, B, C, D, E, F, G};

/**
 * @brief Digit object for displaying 9
 * 
 */
DIGIT D9{A, B, C, D, F, G};

/**
 * @brief Digit object for displaying '.'
 * 
 */
DIGIT DOT{DP};

/**
 * @brief A0 is used to enable or disable sonar input
 * 
 */
#define SONAR_SUPPLY A0

/**
 * @brief A1 is used to trigger an echo
 * 
 */
#define SONAR_TRIGGER_PIN A1

/**
 * @brief A2 is used for receiving echo
 * 
 */
#define SONAR_ECHO_PIN A2

/**
 * @brief A3 is used for GND of sonar 
 * @note Either A3 can be set to HIGH or A0 can be set to LOW or both for disabling the sonar
 * 
 */
#define SONAR_GND A3

/**
 * @brief Max distance within which sonar should detect
 * 
 */
#define SONAR_MAX_DISTANCE 400

/**
 * @brief A5 is used for enabling/disabling 7 segment display
 * 
 */
#define DISPLAY_SUPPLY A5

/**
 * @brief Delay between pulses
 * 
 */
#define SONAR_PING_DELAY_MILLISECONDS 500

/**
 * @brief A4 is used for providing acoustic feedback with the help of a buzzer
 * 
 */
#define BUZZER_PIN A4
