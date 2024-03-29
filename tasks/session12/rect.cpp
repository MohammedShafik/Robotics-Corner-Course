#include<iostream>
#include "rect.h"

        void Rectangle::setLength(float lth)
        {
            length=lth;
            if(lth <0)
                std::cout<< "Error, Please enter a positive (LENGTH) value" << std::endl;
        }

        float Rectangle::getLength()
        {
            return length;
        }
        void Rectangle::setWidth(float wdt)
        {
            width = wdt;
            if (wdt<0)
                std::cout<< "Error, Please enter a positive (WIDTH) value" << std::endl;                  
        }
        float Rectangle::getWidth()
        {
            return width;
        }     
        float Rectangle::getArea()          
        {
            return width * length;
        }