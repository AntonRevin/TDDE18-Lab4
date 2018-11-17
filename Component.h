#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include "Connection.h"

using namespace std;

class Component {
   protected:
   public:
    Component(string const _name, Connection* const _left, Connection* const _right);
    Connection* left;
    Connection* right;
    string name;
    virtual void Update(double const _timeStep);
    virtual double GetCurrent();
    double GetVoltage();
    ~Component();
};

#endif