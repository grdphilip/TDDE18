#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

int n;
double f;
char c;
string word;


// First output
cout << "Enter one integer: ";
cin >> n;
cout << "You have entered the number: " 
    << n << endl;
cin.ignore(1000, '\n');

// Second output
cout << "Enter four integers: ";

cin >> n;
cout << "You have entered: ";
cout << n << " ";
cin >> n;
cout << n << " ";
cin >> n;
cout <<  n << " ";
cin >> n;
cout << n << " " << endl;
cin.ignore(1000, '\n');


//Third output
cout << "Enter one integer and one real number: ";
cin >> n;
cin >> f;
setprecision(3);
cout << "The real is: " << setfill(' ') << setw(8) << f << endl;
cout << "The Integer is: " <<  setfill(' ') << setw(5) << n << endl;
cin.ignore(1000, '\n');

cout << "Enter one real and one integer number: ";
cin >> f;
cin >> n;
cout.precision(4);
cout << "The real is: " << setprecision(3) << setfill('.') << setw(10) << fixed << f << endl;
cout << "The Integer is: " << setfill('.') << setw(7) << n << endl;
cin.ignore(1000, '\n');


//Fourth output
cout << "Enter a character: " ;
cin >> c;
cout << "You entered: "
    << c << endl;
cin.ignore(1000, '\n');
   

//Fifth output
cout << "Enter a word: ";
cin >> word;
cout << "The word '" << word
<< "' has " << word.length() << " character(s)" << endl;
cin.ignore(1000, '\n');

//Sixth output
cout << "Enter an integer and a word: ";
cin >> n;
cin >> word;
cout << "You entered: "<< "'" << n << "'"<< " and " << "'" << word << "'" << endl;
cin.ignore(1000, '\n');

//Seventh output
cout << "Enter a character and a word: ";
cin >> c;
cin >> word;
cout << "You entered the string: "<< '"' << word << '"'<< " and the character " << "'" << c << "'" << endl;
cin.ignore(1000, '\n');

//Eight output
cout << "Enter a word and a real number: " << endl;
cin >> word;
cin >> f;
cin.ignore(1000, '\n');
cout << "You entered "  << word << " and " << setprecision(3) << fixed << f << endl;


//9th, 10th 11th
cout << "Enter a text line: ";
getline(cin, word);
cout << "You entered: "<< '"' << word << '"'<< endl;


cout << "Enter a second line of text: ";
getline(cin, word);
cout << "You entered: "<< '"' << word << '"'<< endl;

cout << "Enter three words: ";
cin >> word;
cout << "You have entered: ";
cout << "'" << word << " ";
cin >> word;
cout <<  word << " ";
cin >> word;
cout <<  word << "'" <<" ";

return 0;

}
