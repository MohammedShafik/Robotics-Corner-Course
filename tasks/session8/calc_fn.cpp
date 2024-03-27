#include<iostream>
#include "calc_head.h"
int main()
{
    std::cout<< "enter 2 numbers: "<< std::endl;
    float x;
    float y;
    std::cin>> x >> y;
    char operation;
    std::cout << "enter the deisred operation: ";
    std::cin >> operation;
    float result;
    switch ((operation))
    {
        case '+':
        result = add(x,y);
        break;
        case '-':
        result = sub(x,y);
        break;
        case '*':
        result = mul(x,y);
        break;
        case '/':
        result = dvd(x,y);
        break;
    }
    std::cout << "The result is: " << result << std::endl;
}