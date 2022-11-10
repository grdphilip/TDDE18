#include "Component.h"

using namespace std;

Component::Component()
    : current{}
 {
    cout << "Hello" << endl;
 }

Battery::Battery()
        : Component{}, current{}
    {
        cout << "Battery" << endl;
    }

Resistor::Resistor()
        : Component{}, current{}
    {
        cout << "Resistor" << endl;
    }

void Component::CalcCurrent(double current)
{
    cout << current << endl;
}

