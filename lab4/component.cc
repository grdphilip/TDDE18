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

void Component::CalcCurrent(double current)
{
    cout << current << endl;
}

