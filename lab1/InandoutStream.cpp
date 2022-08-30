#include <iostream>
using namespace std;


int main()
{

int n1,n2,n3,n4,n5, n6;
float f1;

// First output
cout << "Enter one integer: " << endl;
cin >> n1;
cout << "You have entered the number: " 
    << n1 << endl;

// Second output
cout << "Enter four integers: " << endl;
cin >> n2;
cin >> n3;
cin >> n4;
cin >> n5;
cout << "You have entered: "
    << n2 << " " << n3 << " " << n4 << " " << n5 << endl;

cout << "Enter one Integer and one real number: " << endl;
cin >> n6;
cin >> f1;
cout << "You have entered: "
    << n6 << " " << f1 << endl;


return 0;
}