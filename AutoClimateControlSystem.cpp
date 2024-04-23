#include "AutoClimateControlSystem.h"
//Code Under Test
	void AutoCliemateControlSystem::on() {
		this->logPtr->write("On Method Called");
       int temp= this->calcPtr->calculateDesiredTemp();
		this->regulatorPtr->regulateTemp(temp);
	}

	void AutoCliemateControlSystem::off() {}