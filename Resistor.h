#ifndef RESISTOR_H
#define RESISTOR_H

#include "Component.h"

using namespace std;

class Resistor : public Component {
   private:
    double const resistance;

   public:
    Resistor(string const _name, Connection* const _left, Connection* const _right, double const _resistance);
    void Update(double const _timeStep);
    double GetCurrent();
    ~Resistor();
};

#endif