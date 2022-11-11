#include "Component.h"

using namespace std;

Component::Component(string name)
    : current{}
 {
    cout << "Hello" << endl;
 }

string Component::print() {
    return "hello";
}

Battery::Battery()
        : Component{}, current{}
    {
        cout << "Battery" << endl;
    }

    Capacitor::Capacitor(string name)
        : Component{}, current{}
    {
        cout << "Capacitor" << endl;
    }

void Component::calcCurrent(double current, double ohm)
{
    cout << current << endl;
}

Resistor::Resistor(string name)
        : Component{}, current{}
    {
        cout << "Resistor" << endl;
    }

double Resistor::calcCurrent(double current, double ohm) {
    current = current/ohm;
    cout << current << endl;
    return current;
}


