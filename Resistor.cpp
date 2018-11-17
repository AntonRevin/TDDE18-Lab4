#include "Resistor.h"

/*
    Resistor > Constructor
*/
Resistor::Resistor(string const _name, Connection* const _left, Connection* const _right, double const _resistance)
    : Component(_name, _left, _right), resistance{_resistance} {
}

/*
    Resistor > Update 
*/
void Resistor::Update(double const _timeStep) {
    double potential{abs(left->Charge - right->Charge)};
    double change{(potential / resistance) * (_timeStep)};
    int direction{((left->Charge <= right->Charge) ? 1 : -1)};
    left->Charge += direction * change;
    right->Charge -= direction * change;
}

/*
    Resistor > Get Current 
*/
double Resistor::GetCurrent() {
    return (GetVoltage() / resistance);
}

/*
    Resistor > Destructor
*/
Resistor::~Resistor() {
}