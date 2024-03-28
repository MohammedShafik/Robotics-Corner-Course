#include<iostream>

void Hello(int x)
{
    std::cout << "Hello " << x << std::endl;
}

int main()
{
    auto function = Hello;
    void (*fnprnt)(int) = Hello;
    fnprnt(1500);
    Hello(2000);
    return 0;
}