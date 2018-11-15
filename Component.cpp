#include <Component.h>

/*
    Component > Constructor
*/
Component::Component(string const _name, Connection* const _left, Connection* const _right)
    : name{_name}, left{_left}, right{_right} {
}

/*
    Component > Destructor
*/
Component::~Component() {
}