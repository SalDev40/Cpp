#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> vect = {1, 2, 3, 4};
    //create iterator
    std::vector<int>::iterator itr;
    
    
    std::string hello = "hello world";
    std::string::iterator itr2;

    //loop through vector using iterator pointer
    for (itr = vect.begin(); itr != vect.end(); itr++)
    {
        std::cout << *itr << " ";
    }

    std::cout << std::endl;

    for (itr2 = hello.begin(); itr2 != hello.end(); itr2++)
    {
        std::cout << *itr2 << " ";
    }


    std::cout << "MAX: " << std::max(50,4);
    std::cout << std::endl;

    return 0;
}