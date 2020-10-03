#include <iomanip>
#include <iostream>
#include <utility>
#include <typeinfo>
#include <iterator>
#include <unordered_map>
#include <string>
// generic output for pairs (map elements)
template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &strm, const std::pair<T1, T2> &p)
{
    return strm << "[" << p.first << "," << p.second << "]";
}

template <typename T>
void printHashTableState(const T &cont)
{
    std::cout << "size: " << cont.size() << "\n";
    std::cout << "buckets: " << cont.bucket_count() << "\n";
    std::cout << "load factor: " << cont.load_factor() << "\n";
    std::cout << "max load factor: " << cont.max_load_factor() << "\n";

    // iterator category: check if doubly or single linked list
    if (
        typeid(typename std::iterator_traits<typename T::iterator>::iterator_category) == typeid(std::bidirectional_iterator_tag) //indicates doubly list
    )
    {
        std::cout << "chaining style: doubly-linked"
                  << "\n";
    }
    else
    {
        std::cout << "chaining style: singly-linked"
                  << "\n";
    }
    // elements per bucket:
    std::cout << "data: "
              << "\n";

    //print all elements within each bucket, some maybe linked list
    for (auto idx = 0; idx != cont.bucket_count(); ++idx)
    {
        std::cout << " b[" << std::setw(2) << idx << " ]: ";
        //print out elements in unordered_set
        for (auto pos = cont.begin(idx); pos != cont.end(idx); ++pos)
        {
            std::cout << *pos << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}

using namespace std;
int main()
{
    // create and initialize an unordered multimap as dictionary
    std::unordered_multimap<string, string> dict = {
        {"day", "Tag"},
        {"strange", "fremd"},
        {"car", "Auto"},
        {"smart", "elegant"},
        {"trait", "Merkmal"},
        {"strange", "seltsam"}};
    printHashTableState(dict);
    // insert some additional values (might cause rehashing)
    // dict.insert({{"smart", "raffiniert"},
    //              {"smart", "klug"},
    //              {"clever", "raffiniert"}});
    // printHashTableState(dict);
    // modify maximum load factor (might cause rehashing)
    dict.max_load_factor(0.7);

    std::cout << "mymap contains: \n";
    for (auto it = dict.begin(); it != dict.end(); ++it)
    {
        std::cout << "BUCKET: " << dict.bucket(it->first) << " -> " << it->first << ":" << it->second << std::endl;
    }

    std::cout << std::endl;
}