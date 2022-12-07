#include <iostream>
#include <iomanip>
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
    vector<string> args(argv + 2, argv + argc);

    auto print = [](std::pair<const string, int> &itp)
    { cout << " " << itp.first << " " << itp.second << endl; };

    if (args[0] == "--print")
    {
        copy(text.begin(), text.end(), ostream_iterator<string>(cout, " "));
    }
    else if (args[0] == "--table")

    {
        /*Defaults in ascending order, therefor good alternative for table */
        map<string, int> wordmap{};
        /*Iterator to print our map*/
        auto print = [](std::pair<const string, int> &itp)
        { cout << setw(11) << itp.first << " " << itp.second << endl; };

        for_each(text.begin(), text.end(), [&wordmap](string s)
                 { return wordmap[s]++; });

        for_each(wordmap.begin(), wordmap.end(), print);
    }
    else if (args[0] == "--frequency")
    {
        vector<std::pair<string, int>> frequency{};

        for_each(text.begin(), text.end(), [&frequency](string s)
                 {
                     frequency.push_back(make_pair(s, 1));
                     sort(frequency.begin(), frequency.end());
                     auto counter = adjacent_find(frequency.begin(), frequency.end());

                     if (counter != frequency.end())
                     {
                         frequency.erase(frequency.begin() + distance(frequency.begin(), counter));
                         frequency[std::distance(frequency.begin(), counter)].second++;
                        
                         
                     } });

                for (int i = 0; i < frequency.size(); i++)
        {
            cout << frequency[i].first << ", " << frequency[i].second << endl;
        }
    }
}

/*
frequency.erase(frequency.begin() + distance(frequency.begin(), counter));
  for (auto it = wordmap.cbegin(); it != wordmap.cend(); ++it)
  for_each(wordmap.begin(), wordmap.end(), [](const pair<string, int> &itp)
           { cout << itp.first << ": " << itp.second << endl; });
  {
      std::cout << it->first << " " << it->second << endl;
  }
  */

// copy(wordmap.cbegin(), wordmap.cend(), ostream_iterator<string, int>(cout, " "));
/*

frequency.erase(frequency.begin() + distance(frequency.begin(), counter));

copy(wordmap.begin(), wordmap.end(), [](const pair<string, int> &itp)
         { cout << itp.first << ": " << itp.second << endl; });

for (auto it = wordmap.cbegin(); it != wordmap.cend(); ++it)
{
    std::cout << it->first << " " << it->second << endl;
}
*/