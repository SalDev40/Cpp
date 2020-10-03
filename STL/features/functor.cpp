#include <iostream>
#include <algorithm>
#include <vector>

class Functor
{
private:
    int num;

public:
    //constructors
    Functor() : num(0)
    {
        std::cout << "*************************************" << std::endl;
        std::cout << " Default constructor call; num = " << num << std::endl;
        std::cout << "*************************************" << std::endl;
    }

    Functor(int val) : num(val)
    {
        std::cout << "*************************************" << std::endl;
        std::cout << "Parameter constructor call; num =  " << num << std::endl;
        std::cout << "*************************************" << std::endl;

    }

    /** functors **/
    void operator() ()
    {
        num++;
        std::cout << "functor call; num =  " << num << std::endl;
    }
    void operator()(int elem)
    {
        std::cout << "NUM: " << num << " ELEM: " << elem << std::endl;
        num += elem;
        std::cout << "functor call; num + elem =  " << num << std::endl;
        std::cout << "------------------------" << std::endl;
    }
};

int main()
{
    Functor func(9);
    std::vector<int> vect = {1, 2, 3};
    std::for_each(vect.begin(), vect.end(), func);

    std::for_each(vect.begin(), vect.end(), Functor());
    // std::for_each(vect.begin(), vect.end(), Functor(20));
              //1. create Functor object , EX: Functor func
             //2. call () for that object, EX: func()


    // Functor func;
    // func();

    return 0;
}