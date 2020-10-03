#include <iostream>
#include <string>

template <typename T>
class Sorting
{
    int state;

public:
    bool operator()(T t1, T t2) 
    {
        if (t1 < t2)
        {
            state = 1;
        }
        else
        {
            state = 0;
        }
        std::cout << "\nstate: " << state << std::endl;
        return t1 < t2;
    }
};

bool less(int one, int two)
{
    return one < two;
}

template <typename T1, typename T2>
class sal
{
public:
    T2 pred;
    T1 num1, num2;

public:
    sal(T1 a, T1 b) : num1(a), num2(b) {
        
    }
    void print()
    {
        int num = pred(num1, num2);
        std::cout
            << "is true? " << num << std::endl;
    }
};

int main()
{

    //we can pass Sorting because it is seen as  a "type"
    //regular functions would'nt work
    sal<int, Sorting<int>> s = {1, 2};
    sal<std::string, Sorting<std::string>> y("he", "wo");

    y.print();

    //change internal object variables
    y.num1 = "wo";
    y.num2 = "he";

    y.print();

    return 0;
}