#ifndef NETWORK_H
#define NETWORK_H

#include <iomanip>
#include <iostream>
#include <vector>
#include "Component.h"

using namespace std;

class Network {
   private:
    vector<Component*> components;
    void StepSimulation(double const _timeStep);
    void PrintUpdate();
    void PrintHeader();

    //ostream* const outputStream;

   public:
    Network();
    void Simulate(int const _iterations, double const _timeStep, int const _outputLines);
    void AddComponent(Component* const _newComponent);
    ~Network();
};

#endif