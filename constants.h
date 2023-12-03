#include <ArxContainer.h>
#pragma once
typedef arx::vector<int> DIGIT;
enum SEG{A=2,B,C,D,E,F,G,DP};
DIGIT D0{A,B,C,D,E,F};
DIGIT D1{B,C};
DIGIT D2{A,B,G,E,D};
DIGIT D3{A,B,G,C,D};
DIGIT D4{F,G,B,C};
DIGIT D5{A,F,G,C,D};
DIGIT D6{A,C,D,E,F,G};
DIGIT D7{A,B,C};
DIGIT D8{A,B,C,D,E,F,G};
DIGIT D9{A,B,C,D,F,G};
DIGIT DOT{DP};

#define SONAR_SUPPLY A0
#define SONAR_TRIGGER_PIN A1
#define SONAR_ECHO_PIN A2
#define SONAR_GND A3

#define SONAR_MAX_DISTANCE 400	
#define DISPLAY_SUPPLY A5
#define SONAR_PING_DELAY_MILLISECONDS 500
#define BUZZER_PIN A4
#define LED_PIN 