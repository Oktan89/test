#include <iostream>

int main (int, char**)
{
    int x = 23;
    int &xc = x;

    decltype(auto) ref = xc;

    std::cout << "Hello world." << std::endl;
    return 0;
}