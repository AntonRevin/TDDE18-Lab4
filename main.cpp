#include "Battery.h"
#include "Capacitor.h"
#include "Component.h"
#include "Connection.h"
#include "Network.h"
#include "Resistor.h"

void circuit_1(int const _iterations, double const _timeStep, double const _batteryVoltage, int const _lines) {
    Network net{};
    Connection p, n, r124, r23;
    net.AddComponent(new Battery("Bat", &p, &n, _batteryVoltage));
    net.AddComponent(new Resistor("R1", &p, &r124, 6.0));
    net.AddComponent(new Resistor("R2", &r124, &r23, 4.0));
    net.AddComponent(new Resistor("R3", &r23, &n, 8.0));
    net.AddComponent(new Resistor("R4", &r124, &n, 12.0));
    net.Simulate(_iterations, _timeStep, _lines);
}

void circuit_2(int const _iterations, double const _timeStep, double const _batteryVoltage, int const _lines) {
    Network net{};
    Connection p, n, l, r;
    net.AddComponent(new Battery("Bat", &p, &n, _batteryVoltage));
    net.AddComponent(new Resistor("R1", &p, &l, 150.0));
    net.AddComponent(new Resistor("R2", &p, &r, 50.0));
    net.AddComponent(new Resistor("R3", &l, &r, 100.0));
    net.AddComponent(new Resistor("R4", &l, &n, 300.0));
    net.AddComponent(new Resistor("R5", &r, &n, 250.0));
    net.Simulate(_iterations, _timeStep, _lines);
}

void circuit_3(int const _iterations, double const _timeStep, double const _batteryVoltage, int const _lines) {
    Network net{};
    Connection p, n, l, r;
    net.AddComponent(new Battery("Bat", &p, &n, _batteryVoltage));
    net.AddComponent(new Resistor("R1", &p, &l, 150.0));
    net.AddComponent(new Resistor("R2", &p, &r, 50.0));
    net.AddComponent(new Capacitor("C3", &l, &r, 1.0));
    net.AddComponent(new Resistor("R4", &l, &n, 300.0));
    net.AddComponent(new Capacitor("C5", &r, &n, 0.75));
    net.Simulate(_iterations, _timeStep, _lines);
}

void show_usage() {
    std::cout << "Circuit Simulator Help" << std::endl;
    std::cout << "  Usage : program_name _iterations _timeStep _batteryVoltage _lines" << std::endl;
}

int main(int argc, char** argv) {
    if (argc != 5) {
        show_usage();
        return -1;
    }

    int iterations{stoi(argv[1])};
    double timeStep{stod(argv[2])};
    double batteryVoltage{stod(argv[3])};
    int lines{stoi(argv[4])};

    cout << endl;
    circuit_1(iterations, timeStep, batteryVoltage, lines);
    cout << endl;
    circuit_2(iterations, timeStep, batteryVoltage, lines);
    cout << endl;
    circuit_3(iterations, timeStep, batteryVoltage, lines);
}