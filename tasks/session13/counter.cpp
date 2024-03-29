#include<iostream>

class Car
{
    private:
    std::string factory;
    std::string color;
    int model;
    static int counter;

    public:
    Car(): factory("BMW"), color("RED"), model(2022)
    {
        counter++;
    }
    int getCounter()
    {
        return counter;
    }
};

int Car::counter = 0; 
    
int main()
{
    std::cout<< "After each one: ";
    Car c1;
    std::cout << c1.getCounter() << " ";
    Car c2;
    std::cout << c2.getCounter() << " ";
    Car c3;
    std::cout << c3.getCounter() << std::endl << "After all: ";
    
    std::cout << c1.getCounter() <<  " ";
    std::cout << c2.getCounter() <<  " ";
    std::cout << c3.getCounter() << std::endl;
    return 0;
}