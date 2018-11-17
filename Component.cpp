#include "Component.h"

/*
    Component > Constructor
*/
Component::Component(string const _name, Connection* const _left, Connection* const _right)
    : name{_name}, left{_left}, right{_right} {
}

/*
    Component > Virtuals
*/
void Component::Update(double const _timeStep){};
double Component::GetCurrent(){};

/*
    Component > Get Voltage
*/
double Component::GetVoltage() {
    return abs(left->Charge - right->Charge);
}

/*
    Component > Destructor
*/
Component::~Component() {
}