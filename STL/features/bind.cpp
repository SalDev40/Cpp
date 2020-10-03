#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <iterator>

template <typename T>
class Add
{
private:
    T num;

public:
    Add() : num(0) {}
    T operator()(T p1, T p2)
    {
        std::cout << p1 << p2;
        return p1 + p2;
    }
};

int add(int p1, int p2)
{
    return p1 + p2;
}

int main()
{
    auto mul = std::bind(std::multiplies<int>(), std::placeholders::_1, 10);
    std::cout << mul(9) << std::endl;

    std::vector<int> vect = {1, 2, 3, 4};
    std::vector<int> vect2(vect.size()); //reserve size for vect 2

    //add each element of vect1 by 10 and store in vect2
    std::transform(
        vect.begin(), vect.end(), vect2.begin(),
        std::bind(std::plus<int>(), std::placeholders::_1, 10));

    //print vectors to output
    std::copy(vect.begin(), vect.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\nVect 2: " << std::endl;
    std::copy(vect2.begin(), vect2.end(), std::ostream_iterator<int>(std::cout, " "));

    //use custom functor
    std::vector<int> vect3(vect2.size());
    std::copy(vect2.begin(), vect2.end(), vect3.begin());
    std::transform(
        vect3.begin(), vect3.end(), vect3.begin(),
        std::bind(Add<int>(), std::placeholders::_1, 10));

    std::cout << "\nVect 3: " << std::endl;
    std::copy(vect3.begin(), vect3.end(), std::ostream_iterator<int>(std::cout, " "));

    std::cout << "\nBind global function\n";
    auto post = std::bind(add, std::placeholders::_1, std::placeholders::_2);
    std::cout << post(2, 3) << std::endl;

    auto ph = std::bind(std::multiplies<int>(), std::bind(std::plus<int>(), 
    std::placeholders::_1, 10), 2);
    std::cout << ph(5) << std::endl;
    return 0;
}