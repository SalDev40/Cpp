#include <iomanip>
#include <iostream>
#include <utility>
#include <typeinfo>
#include <iterator>
#include <unordered_set>


template <typename T>
void printHashTableState(const T &cont)
{
    std::cout << "size: " << cont.size() << "\n";
    std::cout << "buckets: " << cont.bucket_count() << "\n";
    std::cout << "load factor: " << cont.load_factor() << "\n";
    std::cout << "max load factor: " << cont.max_load_factor() << "\n";

    // iterator category: check if doubly or single linked list
    if (
        typeid(typename std::iterator_traits<typename T::iterator>::iterator_category) 
        == typeid(std::bidirectional_iterator_tag) //indicates doubly list
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

int main()
{
    // create and initialize an unordered set
    std::unordered_set<int> intset = {1, 2, 3, 5, 7, 11, 13, 17, 19};
    printHashTableState(intset);
    // // insert some additional values (might cause rehashing)
    // intset.insert({-7, 17, 33, 4});
    // printHashTableState(intset);
}