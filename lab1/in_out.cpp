#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // First output
    int num{};
    cout << "Enter one integer: ";
    cin >> num;
    cout << "You have entered the number: "
         << num << endl;
    cin.ignore(1000, '\n');

    // Second output
    cout << "Enter four integers: ";

    cin >> num;
    cout << "You have entered: ";
    cout << num << " ";
    cin >> num;
    cout << num << " ";
    cin >> num;
    cout << num << " ";
    cin >> num;
    cout << num << " " << endl;
    cin.ignore(1000, '\n');

    // Third output
    double dec{};
    cout << "Enter one integer and one real number: ";
    cin >> num;
    cin >> dec;

    cout << "The real is: " << setfill(' ') << setw(8) << fixed << setprecision(3) << dec << showpoint << endl;
    cout << "The Integer is: " << setw(5) << num << endl;
    cin.ignore(1000, '\n');

    cout << "Enter one real and one integer number: ";
    cin >> dec;
    cin >> num;
    cout << "The real is: " << setfill('.') << setw(11) << dec << endl;
    cout << "The Integer is: " << setw(8) << num << endl;
    cin.ignore(1000, '\n');

    // Fourth output
    char letter{};
    cout << "Enter a character: ";
    cin >> letter;
    cout << "You entered: "
         << letter << endl;
    cin.ignore(1000, '\n');

    // Fifth output
    string word{};
    cout << "Enter a word: ";
    cin >> word;
    cout << "The word '" << word
         << "' has " << word.length() << " character(s)" << endl;
    cin.ignore(1000, '\n');

    // Sixth output
    cout << "Enter an integer and a word: ";
    cin >> num;
    cin >> word;
    cout << "You entered: "
         << "'" << num << "'"
         << " and "
         << "'" << word << "'" << endl;
    cin.ignore(1000, '\n');

    // Seventh output
    cout << "Enter a character and a word: ";
    cin >> letter;
    cin >> word;
    cout << "You entered the string: " << '"' << word << '"' << " and the character "
         << "'" << letter << "'" << endl;
    cin.ignore(1000, '\n');

    // Eight output
    cout << "Enter a word and a real number: " << endl;
    cin >> word;
    cin >> dec;
    cin.ignore(1000, '\n');
    cout << "You entered " << word << " and " /*<< fixed*/ << dec << endl;

    // 9th, 10th 11th
    cout << "Enter a text line: ";
    getline(cin, word);
    cout << "You entered: " << '"' << word << '"' << endl;

    cout << "Enter a second line of text: ";
    getline(cin, word);
    cout << "You entered: " << '"' << word << '"' << endl;

    cout << "Enter three words: ";
    cin >> word;
    cout << "You have entered: ";
    cout << "'" << word << " ";
    cin >> word;
    cout << word << " ";
    cin >> word;
    cout << word << "'"
         << " ";

    return 0;
}
