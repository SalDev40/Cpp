#include <iostream>
#include <string>

template <typename T>
class Sorting
{
public:
    bool operator()(T t1, T t2)
    {
        return t1 < t2;
    }
};

template <typename T1, typename T2>
class sal
{
private:
    T2 pred;
    T1 num1, num2;

public:
    sal(T1 a, T1 b) : num1(a), num2(b) {}
    void print()
    {
        std::cout << pred(num1, num2) << std::endl;
    }
};

int main()
{

    sal<int, Sorting<int>> s = {1, 2};
    sal<std::string, Sorting<std::string>> y("he", "wo");
    s.print();

    return 0;
}