#include "Component.h"
#include "vector"

int main(){
    
    std::vector<Component> net{};
    Component c;
    Battery b;
    Resistor r;
    c.CalcCurrent(4);
    
    return 0;

}