#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <istream>
#include <fstream>
#include <iterator>
#include <map>
#include <ostream>

using namespace std;

int main(int argc, char **argv)
{

    string inFile = argv[1];
    ifstream textFile{inFile};
    vector<string> text{};
    copy(istream_iterator<string>(textFile), istream_iterator<string>(), back_insert_iterator<vector<string>>(text));
    map<string, int>frequency{};
    vector<string> args(argv + 2, argv + argc);



    if(args[0] == "--print") {
    
            
            copy(text.begin(), text.end(), ostream_iterator<string>(cout, " "));

    }
 

   
}