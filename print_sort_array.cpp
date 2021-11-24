#include <iostream>
#include "const.h"

void print_sort_array(int* elements)
{
    for (int i = 0; i < total; i++)
    {
        std::cout << elements[i] << " ";
    }
    std::cout << "\n";
}