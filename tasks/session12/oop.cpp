#include<iostream>
#include "rect.h"

int main()
{
    Rectangle rec;
    rec.setLength(12);
    rec.setWidth(23);
    if(rec.getLength()>=0 & rec.getWidth()>=0)
    {
        std::cout<< "Length: " << rec.getLength() <<std::endl;
        std::cout<< "Width: " << rec.getWidth() <<std::endl;
        std::cout<< "Area of rectangle: " << rec.getArea() <<std::endl;
    }
    return 0;
}