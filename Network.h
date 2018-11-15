#ifndef NETWORK_H
#define NETWORK_H

#include <Component.h>
#include <vector>

using namespace std;

class Network {
   private:
    vector<Component*> components;
    void StepSimulation();

   public:
    Network();
    void Simulate();
    void AddComponent(Component* const _newComponent);
    ~Network();
};

#endif