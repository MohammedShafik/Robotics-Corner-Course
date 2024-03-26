#include<iostream>
int main()
{
 float m_d;
 std::cout<< "Please enter distance in Mi to convert to KM: ";
 std::cin>> m_d;
 float KM = m_d * 1.609;
 std::cout<< "Distance = " << KM << " KM" << std::endl;
 }