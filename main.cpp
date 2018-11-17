#include "Battery.h"
#include "Capacitor.h"
#include "Component.h"
#include "Connection.h"
#include "Network.h"
#include "Resistor.h"

void circuit_1() {
    Network net{};
    Connection p, n, r124, r23;
    net.AddComponent(new Battery("Bat", &p, &n, 24.0));
    net.AddComponent(new Resistor("R1", &p, &r124, 6.0));
    net.AddComponent(new Resistor("R2", &r124, &r23, 4.0));
    net.AddComponent(new Resistor("R3", &r23, &n, 8.0));
    net.AddComponent(new Resistor("R4", &r124, &n, 12.0));
    net.Simulate(200000, 0.01, 10);
}

void circuit_2() {
    Network net{};
    Connection p, n, l, r;
    net.AddComponent(new Battery("Bat", &p, &n, 24.0));
    net.AddComponent(new Resistor("R1", &p, &l, 150.0));
    net.AddComponent(new Resistor("R2", &p, &r, 50.0));
    net.AddComponent(new Resistor("R3", &l, &r, 100.0));
    net.AddComponent(new Resistor("R4", &l, &n, 300.0));
    net.AddComponent(new Resistor("R5", &r, &n, 250.0));
    net.Simulate(200000, 0.01, 10);
}

void circuit_3() {
    Network net{};
    Connection p, n, l, r;
    net.AddComponent(new Battery("Bat", &p, &n, 24.0));
    net.AddComponent(new Resistor("R1", &p, &l, 150.0));
    net.AddComponent(new Resistor("R2", &p, &r, 50.0));
    net.AddComponent(new Resistor("C3", &l, &r, 1.0));
    net.AddComponent(new Resistor("R4", &l, &n, 300.0));
    net.AddComponent(new Resistor("C5", &r, &n, 0.75));
    net.Simulate(200000, 0.01, 10);
}

int main() {
    cout << endl;
    circuit_1();
    cout << endl;
    circuit_2();
    cout << endl;
    circuit_3();
}