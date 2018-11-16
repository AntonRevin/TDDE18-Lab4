#include <Battery.h>

/*
    Battery > Constructor
*/
Battery::Battery(string const _name, Connection* const _left, Connection* const _right, double const _voltage)
    : Component(_name, _left, _right), voltage{_voltage} {
}

/*
    Battery > 
*/
void Battery::Update(double* const _timeStep) {
}

double Battery::GetCharge() {
}

/*
    Resistor > Destructor
*/
Battery::~Battery() {
}