
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

fstream myFile;
string temp;

//myFile.open("message.txt", ios::out); 
myFile.open("message.txt",ios::in);

if(myFile.is_open()) {
    cout << "yes" << endl;
}

while(getline(myFile, temp)) {
    cout << temp << endl;
}



return 0;
}