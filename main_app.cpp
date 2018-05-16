#include "my_class.hpp"
#include <iostream>

int main()
{
    my_class<int> a{5};

    std::cout << "a: " << a.value() << std::endl;
    return 0;
}
