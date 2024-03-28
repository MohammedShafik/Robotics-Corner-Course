#include<iostream>
#include<array>

int main()
{
    std::array<int,5> list;
    // std::array<int,5> ::iterator iterator_n;

    std::cout << "Enter list elements: " << std::endl;
    for(auto iterator_n = list.begin(); iterator_n != list.end(); ++iterator_n)
    {
        std::cin >> *iterator_n;
    }
    std::cout << "---- --- --- You entered --- --- ---" << std::endl;
    for(auto iterator_n = list.begin(); iterator_n != list.end(); ++iterator_n)
    {
        std::cout << *iterator_n << " ";
    }
    std::cout << std::endl;
}