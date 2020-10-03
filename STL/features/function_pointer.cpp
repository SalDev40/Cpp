#include <iostream>
#include <vector>

//typedef of function pointer
typedef void (*function)(int value);

void PrintValue(int a)
{
    std::cout << a << " ";
}

int return_value(int a)
{
    return a;
}

//second paramter is function pointer
void Foreach(const std::vector<int> &vect, function func)
{
    for (auto val : vect)
    {
        func(val);
    }
}

//function pointer that returns an int and takes in a parameter
void Print(const std::vector<int> vect, int (*func)(int))
{

    for (auto val : vect)
    {
        std::cout << func(val) <<  " ";
    }
}

int main()
{
    std::vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8};
    //pass in function as parametr
    // Foreach(vect, PrintValue);
    Print(vect, return_value);
    return 0;
}