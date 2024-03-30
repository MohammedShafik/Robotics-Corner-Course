#include<iostream>

float x,y;
class Shape
{
private:
    float length = 6.3;
    float width = 4.2;
public:
    virtual void area(float l, float w)
    {    
        length=l; width=w;
        std::cout<< "1.5 Area of Rectangle is: " << length * width * 1.5 << std::endl;
    }    
};

class Rectangle : public Shape
{
private:
    float length = 3.1;
    float width = 7.9;
public:
    void area(float l, float w) override
    {    
        length=l; width=w;
        std::cout<< "Area of Rectangle is: " << length * width << std::endl;
    }    
};

class Circle : public Shape
{
private:
    float radius = 2.6;
    float PI = 3.14;
public:
    void area(float l, float w) override
    {    
        radius=l;
        std::cout<< "Area of Circle is: " << PI * radius * radius << std::endl;
    }    
};

int main()
{
    std::cout<<"Please enter two values"<<std::endl;
    std::cin >> x >> y;

    Shape *Shape_ptr;
    Shape ss;
    Rectangle r;
    Circle c;
    
    Shape_ptr = &ss;
    Shape_ptr->area(x,y);
    Shape_ptr = &r;
    Shape_ptr->area(x,y);
    Shape_ptr = &c;
    Shape_ptr->area(x,y);
}