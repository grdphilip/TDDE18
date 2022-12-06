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

/*

void findFrequency(vector<string> text{};) {
};

*/

int main(int argc, char **argv)
{

    string inFile = argv[1];
    ifstream textFile{inFile};
    vector<string> text{};
    copy(istream_iterator<string>(textFile), istream_iterator<string>(), back_insert_iterator<vector<string>>(text));
    map<string, int> wordmap{}; // Defaults in ascending order
    vector<string> args(argv + 2, argv + argc);

    if (args[0] == "--print")
    {
        copy(text.begin(), text.end(), ostream_iterator<string>(cout, " "));
    }
    else if (args[0] == "--frequency")
    {
        for_each(text.begin(), text.end(), [&wordmap](std::string s)
                 { return wordmap[s] += 1; });

        for_each(wordmap.begin(), wordmap.end(), [](const pair<string, int> &itp)
                 { cout << itp.first << ": " << itp.second << endl; });

        // copy(wordmap.cbegin(), wordmap.cend(), ostream_iterator<string, int>(cout, " "));
        /*
        for (auto it = wordmap.cbegin(); it != wordmap.cend(); ++it)
        {
            std::cout << it->first << " " << it->second << endl;
        }
        */
    }
}