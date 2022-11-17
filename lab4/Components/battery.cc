#include "battery.h"

using namespace std;

Battery::Battery(string name, double volt, Terminal &input, Terminal &output)
        : Component{name, input, output}, voltage{volt}
    {
        set_voltage(voltage);

    }

double Battery::get_current() const{
    return abs(in.charge-out.charge);
}

void Battery::set_voltage(int const &value) {
    out.charge = value;
   
}

int Battery::get_voltage() const {
    return this->voltage;
}

void Battery::print_component() {
    cout << get_voltage() << "     ";
    cout << get_current() << "     ";
}
void Battery::calcCurrent(double const &time) {

}
