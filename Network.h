#ifndef NETWORK_H
#define NETWORK_H

#include <Component.h>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

class Network {
   private:
    vector<Component*> components;
    void StepSimulation(double* const _timeStep);
    void PrintUpdate();
    void PrintHeader();

    ostream* const outputStream;

   public:
    Network(ostream* const _outputStream);
    void Simulate(int* const _iterations, double* const _timeStep, int* const _outputLines);
    void AddComponent(Component* const _newComponent);
    ~Network();
};

#endif