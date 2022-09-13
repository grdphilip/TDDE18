
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    ifstream myFile{"message.txt"};
    bool empty_f{false};
    if (myFile.peek() == EOF)
    {
        cerr << "ERROR: THE FILE IS EMPTY\n";
        empty_f = true;
    }

    string temp{};
    string lword{};
    string sword{};
    double sum{0};
    int num{0};
    if (empty_f == false)
    {
        myFile >> temp;
        sword = temp;
        lword = temp;
        sum += temp.length();
        num++;

        while (myFile >> temp)
        {
            if (lword.length() < temp.length())
            {
                lword = temp;
            }

            if (temp.length() < sword.length())
            {
                sword = temp;
            }

            num++;
            sum += static_cast<double>(temp.length());
        }

        cout << "There are " << num << " words in the file." << endl;
        cout << "The shortest word was: " << '"' << sword << '"' << " with " << sword.length() << " character(s)" << endl;
        cout << "The longest word was: " << '"' << lword << '"' << " with " << lword.length() << " character(s)" << endl;
        cout << "The average length was " << setprecision(3) << sum / num << " characters(s)" << endl;
    }
    return 0;
}