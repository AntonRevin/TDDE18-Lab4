#ifndef COMPONENT_H
#define COMPONENT_H

#include <Connection.h>
#include <string>

using namespace std;

class Component{
    private:
    public:
        Component(string _name, Connection _left, Connection _right){};
        Connection left, right;
        string name;
        virtual void update(){};
        virtual double getCharge(){};
        ~Component(){};
};

#endif