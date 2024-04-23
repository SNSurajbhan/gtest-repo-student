#include "ITemperatureRegulator.h"
#include "ITemperatureCalculator.h"
#include "ILogger.h"
class AutoCliemateControlSystem{
    //Abstraction
    ITemperatureRegulator* regulatorPtr;
    ITemperatureCalculator* calcPtr;
    ILogger* logPtr;
    public:
    //Dependency Injection
    //Constructor Injection

    AutoCliemateControlSystem(
        ITemperatureRegulator *rPtr,
        ITemperatureCalculator *tPtr,
        ILogger *lPtr):regulatorPtr{rPtr},calcPtr{tPtr},logPtr{lPtr}{}

        	void on();
	        void off();

};