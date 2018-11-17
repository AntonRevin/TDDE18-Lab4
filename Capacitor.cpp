#include "Capacitor.h"

/*
    Capacitor > Constructor
*/
Capacitor::Capacitor(string const _name, Connection* const _left, Connection* const _right, double const _capacitance)
    : Component(_name, _left, _right), capacitance{_capacitance}, stored{0} {
}

/*
    Capacitor > Update one Time Step
*/
void Capacitor::Update(double const _timeStep) {
    double potential{abs(left->Charge - right->Charge)};
    double change{(potential - stored) * capacitance * (_timeStep)};
    int direction{((left->Charge <= right->Charge) ? 1 : -1)};
    left->Charge += direction * change;
    right->Charge -= direction * change;
    stored += change;
}

/*
    Capacitor > Get Current
*/
double Capacitor::GetCurrent() {
    return capacitance * (GetVoltage() - stored);
}

/*
    Capacitor > Destructor
*/
Capacitor::~Capacitor() {
}
