#ifndef COMPONENT_H
#define COMPONENT_H

#include <Connection.h>
#include <string>

using namespace std;

class Component{
    private:
    public:
        Component(string const _name, Connection* const _left, Connection* const _right){};
        Connection* left;
        Connection* right;
        string name;
        virtual void update(){};
        virtual double getCharge(){};
        ~Component(){};
};

#endif