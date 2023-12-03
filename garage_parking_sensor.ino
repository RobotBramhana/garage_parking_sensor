#include <ArxSmartPtr.h>

#include "garage_parking.h"
std::shared_ptr<GarageParking> gp;
std::shared_ptr<Sonar> s;

void setup(){
Serial.begin(9600);
gp=std::make_shared<GarageParking>();
  }

  
  
void loop() {
  gp->check_distance();
}