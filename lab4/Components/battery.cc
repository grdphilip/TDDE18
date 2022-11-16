#include "battery.h"

using namespace std;

Battery::Battery(string name, double volt, Terminal &input, Terminal &output)
        : Component{name, input, output}, voltage{volt}
    {
        cout << "Battery" << endl;
    }
void Battery::set_voltage(int const &value) {
    this->voltage = value;
}

int Battery::get_voltage() const {
    return this->voltage;
}

