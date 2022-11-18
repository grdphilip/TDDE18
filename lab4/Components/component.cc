#include "component.h"
#include "math.h"
using namespace std;

Component::Component(string name, Terminal &input, Terminal &output)
    : name{name}, in{input}, out{output}
{
}

Component::~Component() {
    
}
double Component::get_charge() const
{
    return (abs(out.charge-in.charge));
}

string Component::get_name() const {
    return name;
}




