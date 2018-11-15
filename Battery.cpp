#include <Battery.h>

/*
    Resistor > Constructor
*/
Battery::Battery(string const _name, Connection* const _left, Connection* const _right, double const _voltage)
    : Component(_name, _left, _right), voltage{_voltage} {
}

void Battery::update() {
}

double Battery::getCharge() {
}

/*
    Resistor > Destructor
*/
Battery::~Battery() {
}