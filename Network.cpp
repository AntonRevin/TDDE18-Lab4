#include <Network.h>

/*
    Network > Constructor
*/
Network::Network(ostream* const _outputStream)
    : components{}, outputStream{_outputStream} {
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
void Network::Simulate(int* const _iterations, double* const _timeStep, int* const _outputLines) {
    PrintHeader();
    for (int i = 1; i <= *_iterations; i++) {
        StepSimulation(_timeStep);
        PrintUpdate();
    }
}

/*
    Network > Private Step Simulation 
*/
void Network::StepSimulation(double* const _timeStep) {
    for (Component* c : components) {
        c->Update(_timeStep);
    }
}

/*
    Network > Print Update Line
*/
void Network::PrintUpdate() {
    *outputStream << setw(5);
    for (Component* c : components) {
        // TODO
    }
}

/*
    Network > Print Header Line(s)
*/
void Network::PrintHeader() {
    *outputStream << setw(11);
    string temp{};
    for (Component* c : components) {
        temp += c->name;
    }
    *outputStream << temp << endl;
    temp = "";
    for (Component* c : components) {
        temp += " Volt  Curr ";
    }
    *outputStream << temp << endl;
}

/*
    Network > Destructor
*/
Network::~Network() {
}