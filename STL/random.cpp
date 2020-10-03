#include <string>
#include <iostream>
int main(){
    std::string str = "hello world";
    char* ptr = (char * )str.data();
    *ptr = 's';
     for(const auto&elem : str ){
         std::cout << elem << " ";    
     }
    std::cout << std::endl;
    return 0;
}
