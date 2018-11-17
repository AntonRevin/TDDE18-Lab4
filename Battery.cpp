#include "Battery.h"

/*
    Battery > Constructor
*/
Battery::Battery(string const _name, Connection* const _left, Connection* const _right, double const _voltage)
    : Component(_name, _left, _right), voltage{_voltage} {
}

/*
    Battery > Update Simulation one step
*/
void Battery::Update(double const _timeStep) {
    left->Charge = 0;
    right->Charge = voltage;
}

/*
    Battery > Get Current
*/
double Battery::GetCurrent() {
    return 0;
}

/*
    Battery > Destructor
*/
Battery::~Battery() {
}