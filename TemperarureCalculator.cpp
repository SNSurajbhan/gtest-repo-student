#include "ITemperatureCalculator.h"
class RFDTempSensor{
    //HW Dependency
public:
	int getCurrentTemp() { return 35;}

};

class OCTSensor{
    //Hw Dependency
public:int getOccupencyNo() {  return 4;}
	};

class TemperatueCalculator:public ITemperatureCalculator{
private:
	RFDTempSensor tempSensor;
	OCTSensor ocuuSensor;
public:
	TemperatueCalculator(){}
	int  calculateDesiredTemp() {
		this->tempSensor.getCurrentTemp();
		this->ocuuSensor.getOccupencyNo();
        return 25;
	}
};