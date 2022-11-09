#include "Component.h"

using namespace std;

Component::Component()
    : current{}
 {
    cout << "Hello" << endl;
 }

void Component::CalcCurrent(int current)
{
    cout << current << endl;
}

