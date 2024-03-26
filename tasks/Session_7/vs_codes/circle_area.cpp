#include<iostream>
constexpr float pi=3.14;
int main()
{
    float r;
    std::cout<< "PLease enter a radius for a circle in cm : ";
    std::cin>> r;
    float res = pi * r * r;
    std::cout<< "Area of the circle is: "<< res << " cm^2"<<std::endl;
    }