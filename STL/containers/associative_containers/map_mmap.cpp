#include <map>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
void associative_array()
{
    // create map / associative array
    // - keys are strings
    // - values are floats
    typedef map<string, float> StringFloatMap;
    StringFloatMap stocks;
    // insert some elements
    stocks["BASF"] = 369.50;
    stocks["VW"] = 413.50;
    stocks["Daimler"] = 819.00;
    stocks["BMW"] = 834.00;
    stocks["Siemens"] = 842.20;
    // create empty container7.8 Maps and Multimaps
    // print all elements
    StringFloatMap::iterator pos;
    cout << left; // left-adjust values
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << setw(12) << pos->first
             << "price: " << pos->second << endl;
    }
    cout << endl;
    // boom (all prices doubled)
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        pos->second *= 2;
    }
    // print all elements
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << setw(12) << pos->first
             << "price: " << pos->second << endl;
    }
    cout << endl;
    // rename key from "VW" to "Volkswagen"
    // - provided only by exchanging element
    stocks["Volkswagen"] = stocks["VW"];
    stocks.erase("VW");
    // print all elements
    for (pos = stocks.begin(); pos != stocks.end(); ++pos)
    {
        cout << "stock: " << setw(12) << pos->first
             << "price: " << pos->second << endl;
    }
}

void dictionary()
{
    {
        // create multimap as string/string dictionary
        multimap<string, string> dict;
        // insert some elements in random order
        dict.insert({{"day", "Tag"}, {"strange", "fremd"}, {"car", "Auto"}, {"smart", "elegant"}, {"trait", "Merkmal"}, {"strange", "seltsam"}, {"smart", "raffiniert"}, {"smart", "klug"}, {"clever", "raffiniert"}});
        // print all elements
        cout.setf(ios::left, ios::adjustfield);
        cout << " " << setw(10) << "english "
             << "german " << endl;
        cout << setfill('-') << setw(20) << ""
             << setfill(' ') << endl;

        for (const auto &elem : dict)
        {
            cout << " " << setw(10) << elem.first
                 << elem.second << endl;
        }
        cout << endl;
        // print all values for key "smart"
        string word("smart");
        cout << word << ": " << endl;
      
         for (const auto &elem : dict)
        {
            if (elem.first == word)
            {
                cout << " " << elem.second << endl;
            }
        }
        // print all keys for value "raffiniert"
        word = ("raffiniert");
        cout << word << ": " << endl;
        for (const auto &elem : dict)
        {
            if (elem.second == word)
            {
                cout << " " << elem.first << endl;
            }
        }
    }
}

int main()
{
    map<string, double> coll{{"tim", 9.9},
                             {"struppi", 11.77}};
    // square the value of each element:
    for_each(coll.begin(), coll.end(),
             [](pair<const string, double> &elem) {
                 elem.second *= elem.second;
             });
    // print each element:
    for_each(coll.begin(), coll.end(),
             [](const map<string, double>::value_type &elem) {
                 cout << elem.first << ": " << elem.second << endl;
             });

    cout << " _________________________________________ " << endl;
    cout << "ASSOCIATIVE ARRAY" << endl;
    cout << " _________________________________________ " << endl;
    associative_array();

    cout << " _________________________________________ " << endl;
    cout << "Dictionary" << endl;
    cout << " _________________________________________ " << endl;
    dictionary();
}