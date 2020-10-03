#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

template <typename T>
auto return_lambda(T var)
{
    return [var]() mutable {
        std::cout << "returned lamda: " << var << std::endl;
    };
}

//function with a capture
template <typename T1, typename T2>
void for_each(T1 vect, T2 func)
{
    for (auto val : vect)
    {
        func(val);
    }
}

//function without a capture and using iterators
template <typename T1, typename T2>
void print(T1 begin,
           T2 end,
           void (*predicate)(int)) //anonymous lamda function
{

    for (auto itr = begin; itr != end; itr++)
    {
        predicate(*itr);
    }
}

int main()
{

    std::vector<int> vect = {1, 2, 3, 5};

    //lambda function (anonymous function)
    std::cout << 1 << " _______ " << std::endl;
    for_each(vect, [](int value) { std::cout << value << " "; });

    //capture = pass in outside variable (like closure in javascript)
    std::cout << "\n"
              << 2 << " _______ " << std::endl;
    int a = 555456;
    for_each(vect, [a](int value) { std::cout << "capture: " << a << " "; });

    //real-life example
    std::cout << "\n"
              << 3 << " _______ " << std::endl;
    auto it = std::find_if(vect.begin(), vect.end(), [](int val) { return val > 4; });
    std::cout << *it;

    //lambda without closure passed, using iterators
    std::cout << "\n"
              << 4 << " _______ " << std::endl;
    print(vect.begin(), vect.end(), [](int value) { std::cout << "value:" << value << " "; });

    std::cout << "\n"
              << 5 << " _______ " << std::endl;
    //get returned lambda and print
    auto r = return_lambda<int>(5);
    r();
    return 0;
}