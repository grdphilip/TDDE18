
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

ifstream myFile{"message.txt"};
string temp{};
string lword{};
string sword{"kortaste"};
int i{0};
double sum{0};

while(myFile >> temp) {
    
    if(lword.length() < temp.length()) {
        lword = temp;
    } 

    if(temp.length() < sword.length()){
        sword = temp;
    }

  i++; 
  sum += double(temp.length());
}

cout << "There are " << i << " words in the file." << endl;
cout << "The shortest word was: " << '"' << sword << '"' <<  " with " << sword.length() << " character(s)" << endl;
cout << "The longest word was: "  << '"' << lword << '"' <<  " with " << lword.length() << " character(s)" << endl;
cout << "The average length was " << setprecision(3) << sum/i << " characters(s)" << endl;

return 0;
}