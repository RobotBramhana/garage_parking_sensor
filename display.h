#include "constants.h"
#pragma once
class SevenSegmentDisplay{

void clear(){for(int i=A;i<=DP;i++)digitalWrite(i,HIGH);}

void display(arx::vector<int> pins){
  for(auto &pin:pins)
  {
    digitalWrite(pin,LOW);
  }
}
public:
SevenSegmentDisplay(){
  pinMode(DISPLAY_SUPPLY,OUTPUT);
  digitalWrite(DISPLAY_SUPPLY,LOW);
  for(int i=A;i<=DP;i++)
  pinMode(i,OUTPUT);
clear();}
void display(int number){

  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");

  if(digitalRead(DISPLAY_SUPPLY)){
  clear();
  switch(number){
    case 0:display(D0);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 0");

  break;
    case 1:display(D1);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 1");

  break;
    case 2:display(D2);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 2");

  break;
    case 3:display(D3);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 3");

  break;
    case 4:display(D4);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 4");

  break;
    case 5:display(D5);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 5");

  break;
    case 6:display(D6);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 6");

  break;
    case 7:display(D7);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 7");

  break;
    case 8:display(D8);
    
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 8");

  break;
    case 9:display(D9);
  Serial.print(__func__);
  Serial.print(" : Display is enabled? ");
  Serial.println(digitalRead(DISPLAY_SUPPLY)?"Yes":"No");
  Serial.print(__func__);
  Serial.println(" Displayed digit 9");
  break;
    default:clear();display(DOT);Serial.println("Error: Not programmed");
  }}
}
};