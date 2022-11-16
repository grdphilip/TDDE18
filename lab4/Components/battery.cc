#include "battery.h"

using namespace std;

Battery::Battery()
        : Component{}, voltage{}
    {
        cout << "Battery" << endl;
    }
void Battery::set_voltage(int const &value) {
    this->voltage = value;
}

int Battery::get_voltage() const {
    return this->voltage;
}

