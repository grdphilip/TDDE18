#include "component.h"
#include "math.h"
using namespace std;

Component::Component(string name, Terminal &input, Terminal &output)
    : name{name}, in{input}, out{output}
{
}

double Component::get_current() const
{
    return 0;
}
double Component::get_charge() const
{
    return abs(in.charge - out.charge);
}



Component::~Component()
{
}


