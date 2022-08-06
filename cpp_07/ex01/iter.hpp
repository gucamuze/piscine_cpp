#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    print_elem(const T &elem)
{
    std::cout << "elem = " << elem << std::endl;
}

template<typename T>
void    iter(const T* addr_array, int len, void funct(const T & elem)) {
    for (int i = 0; i < len; i++)
        funct(addr_array[i]);
}

#endif