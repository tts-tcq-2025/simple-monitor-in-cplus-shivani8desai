#ifndef BATTERY_HPP_INCLUDED
#define BATTERY_HPP_INCLUDED

using namespace std;

bool batteryIsOk(float temperature, float soc, float chargeRate);
bool BatteryTemp(float temperature );
bool BatteryCharge (float soc); 
bool BatteryChargeRate(float chargeRate);


#endif
