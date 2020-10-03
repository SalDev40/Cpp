#include <iostream>
#include <array>
#include <tuple>
#include <utility>
#include <string>
int main()
{
    std::array<std::string, 2> a = {"hello", "world"};
    //print elements of array using iterator
    std::cout << "first array: " << std::endl;
    for (auto itr = a.cbegin(); itr != a.cend(); ++itr)
    {
        std::cout << *itr << "\t";
    }

    std::cout << std::endl;
    a.front() = "changed front";

    auto p = a; //copy array
    p[0] = "is";
    p[1] = "das";

    std::cout << "2nd array\n";
    for (const auto &el : p)
    {

        std::cout << "using range based loop: " << el << "\t";
    }

    std::cout << std::endl;
    std::cout << "Max size: " << p.max_size() << std::endl; //max size
    //swap array elements
    p.swap(a);
    for (const auto &el : p)
    {

        std::cout << "After swapping 2nd array =  " << el << "\t";
    }
    std::cout << std::endl;

    //tuple interface
    std::cout << "tuple size: " << std::tuple_size<std::array<std::string, 2>>::value << std::endl;
    std::cout << "get element using tuple: " << std::get<1>(a) << std::endl;
    std::cout << std::endl;

    std::array<int, 2> i;
    for (const auto &el : i)
    {

        std::cout << "Default Initilization w/out {}: " << el << "\t";
    }
    std::cout << std::endl;

    i = {};
    for (const auto &el : i)
    {

        std::cout << "Default Initilization w/ {}: " << el << "\t";
    }
    std::cout << std::endl;

    return 0;
}