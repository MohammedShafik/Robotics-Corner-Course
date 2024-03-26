#include<iostream>
int main()
{
    std::cout<< "Enter 2 numbers: " << std::endl;
    float x;
    float y;
    std::cin >> x >> y;
    std::cout << "enter the desired operation: " << std::endl;
    char operation;
    std::cin >> operation;
    float result;
    switch ((operation))
    {
        case '+':
            result = x+y;
            break;
        case '-':
            result = x-y;
            break;
        case '*':
            result = x*y;
            break;
        case '/':
            result = x/y;
    }
    std::cout << "Result is: " << result << std::endl;
}