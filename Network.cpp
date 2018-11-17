#include "Network.h"

/*
    Network > Constructor
*/
Network::Network()
    : components{} {
}

/*
    Network > Add a Component to the Network
*/
void Network::AddComponent(Component* const _newComponent) {
    components.push_back(_newComponent);
}

/*
    Network > Public Simulation Function
*/
void Network::Simulate(int const _iterations, double const _timeStep, int const _outputLines) {
    PrintHeader();
    for (int i = 1; i <= _iterations; i++) {
        StepSimulation(_timeStep);
        if (i % ((_iterations) / (_outputLines)) == 0) {
            PrintUpdate();
        }
    }
}

/*
    Network > Private Step Simulation 
*/
void Network::StepSimulation(double const _timeStep) {
    for (Component* c : components) {
        c->Update(_timeStep);
    }
}

/*
    Network > Print Update Line
*/
void Network::PrintUpdate() {
    cout << setprecision(2);
    for (Component* c : components) {
        cout << setw(6);
        cout << c->GetVoltage();
        cout << setw(6);
        cout << c->GetCurrent();
    }
    cout << endl;
}

/*
    Network > Print Header Line(s)
*/
void Network::PrintHeader() {
    cout << fixed;
    for (Component* c : components) {
        cout << setw(12);
        cout << c->name;
    }
    cout << endl;
    for (Component* c : components) {
        cout << setw(6);
        cout << "Volt";
        cout << setw(6);
        cout << "Curr";
    }
    cout << endl;
}

/*
    Network > Destructor
*/
Network::~Network() {
}