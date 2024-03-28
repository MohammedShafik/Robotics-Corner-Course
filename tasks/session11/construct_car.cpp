#include<iostream>

struct car
{
    std::string name;
    std::string color;
    int model;
    int speed;
};

int main()
{
    car x = {"Fiat", "Black", 2018, 220};
    car y;
    y.name = "Honda";
    y.color = "Silver";
    y.model = 2022;
    y.speed = 260;
    std::cout << "Car Details: " << x.name << " " << x.color << " " << x.model << " " << x.speed <<std::endl;
    std::cout << "Car Details: " << y.name << " " << y.color << " " << y.model << " " << y.speed <<std::endl;
}
