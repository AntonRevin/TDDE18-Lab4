#include <Component.h>

/*
    Component > Constructor
*/
Component::Component(string _name, Connection _left, Connection _right)
    : name{_name}, left{_left}, right{_right} {
}

/*
    Component > Destructor
*/
Component::~Component() {
}