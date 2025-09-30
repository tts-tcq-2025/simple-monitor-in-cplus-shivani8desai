#include<iostream>
#include "Battery.hpp"

bool BatteryTemp(float temperature ) 
{
  if(temperature < 0 || temperature > 45) 
  {
    cout << "Temperature out of range!\n";
    return false;
  }
}
  
  bool BatteryCharge (float soc)
  {
    if(soc < 20 || soc > 80) 
    {
      cout << "State of Charge out of range!\n";
      return false;
    }
  }

  bool BatteryChargeRate(float chargeRate)
  {
    if(chargeRate > 0.8) 
    {
      cout << "Charge Rate out of range!\n";
      return false;
    }
  }

bool BatteryIsOK(float temperature, float soc,float chargeRate )
{
  return( BatteryTemp(temperature) && BatteryCharge (soc) && BatteryChargeRate(chargeRate) );
}


