#include <Capacitor.h>

/*
    Resistor > Constructor
*/
Capacitor::Capacitor(string const _name, Connection* const _left, Connection* const _right, double const _capacitance)
    : Component(_name, _left, _right), capacitance{_capacitance}, stored{0} {
}

void Capacitor::update() {
}

double Capacitor::getCharge() {
}

/*
    Resistor > Destructor
*/
Capacitor::~Capacitor() {
}