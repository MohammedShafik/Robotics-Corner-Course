#include<iostream>

template<typename A>
A sum(A x, A y)
{
    return(x+y);
}

template<typename T>
void swap(T *x, T *y)
{
    T temp= *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 4, y= 10;
    std::cout<< x << " " << y << std::endl;
    std::cout<< ".Summ: "<< sum(x,y) << std::endl;
    swap(&x , &y);
    std::cout<<".......... Swapping ....."<<std::endl;
    std::cout<< x << " " << y << std::endl;
}