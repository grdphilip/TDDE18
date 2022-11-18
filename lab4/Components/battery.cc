#include "battery.h"

using namespace std;

Battery::Battery(string name, double const volt, Terminal &input, Terminal &output)
        : Component{name, input, output}, voltage{volt}
    {

    }

Battery::~Battery() {

};

double Battery::get_current() const{
    return 0;
}


void Battery::calcCurrent(double const &time) {
    out.charge = voltage;
    in.charge = 0;
}
