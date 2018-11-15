#ifndef CAPACITOR_H
#define CAPACITOR_H

#include <Component.h>

using namespace std;

class Capacitor : public Component {
   private:
    double const capacitance;
    double stored;

   public:
    Capacitor::Capacitor(string const _name, Connection* const _left, Connection* const _right, double const _capacitance);
    void update();
    double getCharge();
    ~Capacitor();
};

#endif