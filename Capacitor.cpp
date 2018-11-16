#include <Capacitor.h>

/*
    Capacitor > Constructor
*/
Capacitor::Capacitor(string const _name, Connection* const _left, Connection* const _right, double const _capacitance)
    : Component(_name, _left, _right), capacitance{_capacitance}, stored{0} {
}

/*
    Capacitor > Update one Time Step
*/
void Capacitor::Update(double* const _timeStep) {
}

/*
    Capacitor > Get Charge
*/
double Capacitor::GetCharge() {
}

/*
    Capacitor > Destructor
*/
Capacitor::~Capacitor() {
}