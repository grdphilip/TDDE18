#include <iostream>
using namespace std;


int main()
{

int n1,n2,n3,n4;
float f1;
char c;
string word;

// First output
cout << "Enter one integer: " << endl;
cin >> n1;
cout << "You have entered the number: " 
    << n1 << endl;

// Second output
cout << "Enter four integers: " << endl;
cin >> n1;
cin >> n2;
cin >> n3;
cin >> n4;
cout << "You have entered: "
    << n1 << " " << n2 << " " << n3 << " " << n4 << endl;

//Third output
cout << "Enter one Integer and one real number: " << endl;
cin >> n1;
cin >> f1;
cout << "The real is: " << f1 << endl; 
cout << "The Integer is: " << n1 << endl; 

//Fourth output
cout << "Enter a character" << endl;
cin >> c;
cout << "You entered "
    << c << endl;
    
//Fifth output
cout << "Enter a word: " << endl;
cin >> word;
cout << "The word " << word
<< " has " << word.length() << " character(s)" << endl;

//Sixth output
cout << "Enter an integer and a word: " << endl;
cin >> n1;
cin >> word;
cout << "You entered: "
<< n1 << " and " << word << "." << endl;

cout << "Enter a character and a word: " << endl;



return 0;
    //Adam was here
}
