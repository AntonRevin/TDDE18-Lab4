#include <Resistor.h>

/*
    Resistor > Constructor
*/
Resistor::Resistor(string const _name, Connection* const _left, Connection* const _right, double const _resistance)
    : Component(_name, _left, _right), resistance{_resistance} {
}

void Resistor::update() {
}

double Resistor::getCharge() {
}

/*
    Resistor > Destructor
*/
Resistor::~Resistor() {
}