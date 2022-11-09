#include <string>
#include <iostream>
namespace std;

/*
Virtual (förälder) fungerar som en abstrakt java metod
Override (barn)
Finns inget sätt att få ut klassnamnet i c++
protected kommer alla subklasser åt, private behöver getter. 
Getters och setters är mer för att kommunicera till saker
som ligger utanför. You declare a pure virtual 
function by using a pure specifier ( = 0 ) in the declaration of a 
virtual member function in the class declaration.
Ett animal måste vara dog horse eller cat om pure virtual. 
I denna kurs använder vi static cast. 

Cat tar mer minne än animal. 
Vector<Animal*> register;
register.push_back(new Cat());
register[0]->print(); // På plats 0 befinner sig en pekare. 
Löst

Tips lab4:
Krets med olika komponenter, då kan man 

*/


class Animal{
    private:
        float fee;
        string sound;
        string name;

    public:
        String makeSound();
        String printName();
        float getFee();

}