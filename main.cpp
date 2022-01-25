#include <iostream>
#include <vector>
#include "myvector.h"

int main (int, char**)
{
    std::vector<int> vec(10);
    OTUS::vector<std::string> vec2(10, "test");
    //vec2[1] = 100;
    std::cout << vec.size() << std::endl;
    std::cout << vec2[1] << std::endl;

    return 0;
}