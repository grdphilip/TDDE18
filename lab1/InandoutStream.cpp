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


//Third output
cout << "Enter one integer and one real number: ";
cin >> n;
cin >> f;
cout.precision(4);
cout << "The real is: " << f << endl;
cout << "The Integer is: " << n << endl;

cout << "Enter one real and one integer number: ";
cin >> f;
cin >> n;
cout << "The Integer is: " << n << endl;
cout << "The real is: " << f << endl;


//Fourth output
cout << "Enter a character: " ;
cin >> c;
cout << "You entered: "
    << c << endl;
   

//Fifth output
cout << "Enter a word: ";
cin >> word;
cout << "The word '" << word
<< "' has " << word.length() << " character(s)" << endl;

//Sixth output
cout << "Enter an integer and a word: ";
cin >> n;
cin >> word;
cout << "You entered: "<< "'" << n << "'"<< " and " << "'" << word << "'" << endl;

//Seventh output
cout << "Enter an character and a word: ";
cin >> c;
cin >> word;
cout << "You entered the word: "<< '"' << word << '"'<< " and the character " << "'" << c << "'" << endl;

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
getline(cin, word);
cout << "You entered: "<< '"' << word << '"'<< endl;



return 0;

}
