#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
template <typename t1, typename t2, typename t3>
auto find(t1 itr, t2 itr2, t3 val)
{
    //find element if it exists
    for (auto pos = itr; pos != itr2; ++pos)
    {
        if (*pos == val)
            return pos;
    }
    //return end if element not found
    return itr2;
}

int main()
{
    std::vector<int> vect = {1, 2, 3};
    //find value and return pointer to it
    auto itr_found = find(vect.begin(), vect.end(), 1);

    //print elements of vector
    for (auto const &elem : vect)
    {
        std::cout << elem << std::endl;
    }

    //check if item was found
    if (itr_found != vect.end())
    {
        std::cout << "item found: " << *itr_found << std::endl;
        *itr_found = 99;
    }
    else
    {
        std::cout << "element not found" << std::endl;
    }

    vect.push_back(100);
    //copy contents of vector to output
    std::copy(vect.begin(), vect.end(), std::ostream_iterator<int>(std::cout, "\t"));
    std::cout << std::endl;
    return 0;
}