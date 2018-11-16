#ifndef BATTERY_H
#define BATTERY_H

#include <Component.h>

using namespace std;

class Battery : public Component {
   private:
    double const voltage;

   public:
    Battery(string const _name, Connection* const _left, Connection* const _right, double const _voltage);
    void Update(double* const _timeStep);
    double GetCharge();
    ~Battery();
};

#endif