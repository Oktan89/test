#include <iostream>
#include <vector>
#include "myvector.h"

int main (int, char**)
{
    otus::vector<std::string> vec{"1", "2", "3", "4", "5", "6"};

    std::cout << vec[1] << " " << vec.size()<< std::endl;
    try
    {
        vec.at(6);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}