#include "Component.h"

using namespace std;

Component::Component()
    : current{}
 {
    cout << "Hello" << endl;
 }

Component::Battery()
    : current{} 
    {
        cout << "Battery" << endl;
    }

void Component::CalcCurrent(int current)
{
    cout << current << endl;
}

