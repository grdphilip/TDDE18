#include "simulator.h"

using namespace std;

Simulator::Simulator(std::vector<Component *> vec, int iterations, int lines, double time)
    : components{vec}, iterations{iterations}, lines{lines}, time{time}
{
}

void Simulator::simulate()
{
  cout << "Simulating..." << endl;
  cout << "Bat" << "            R1" << "              R2" << endl;
  cout << "Volt" << "   Curr" << "   Volt" << "    Curr" << "    Volt" << "    Curr" << endl;
    for (int j = 0; j <= iterations; j++)
    {
        for (Component *i : components)
        {
            
          i->calcCurrent(time);
            if (j % (iterations / lines) == 0)
            {
              i->print_component();
              cout << endl;
            }
        }
    }
}