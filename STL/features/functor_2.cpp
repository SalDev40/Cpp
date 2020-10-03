#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

class Functor
{
private:
    int num;

public:
    Functor(int val) : num(val) {}
    bool operator()(int elem) const
    {
        return elem == num;
    }
};

int main()
{
    //std::set<int> coll = {1, 2, 3, 45, 6, 2};
    std::vector<int> coll = {1, 2, 3, 45, 6, 2};

    std::vector<int>::iterator ptr = std::remove_if(coll.begin(), coll.end(), Functor(1));
                //1. Functor func(6)
                //2. func(elem from coll vector)

    if (ptr != coll.end())
    {
        std::cout << "Elem found:  " << std::endl;
        coll.erase(ptr);
    }
    else
    {
        std::cout << "Elem not found " << std::endl;
    }

    for (auto itr : coll)
    {
        std::cout << itr << " ";
    }
    std::cout << std::endl;

    return 0;
}