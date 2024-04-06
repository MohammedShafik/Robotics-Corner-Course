#include<iostream>

template<typename A, typename B>
struct pair
{
    A fPar;
    B sPar;
    void display()
    {
        std::cout<< fPar << " " << sPar << std::endl;
    }

};
int main()
{
    pair<int, std::string> p={10, "Ali"};
    p.display();
    return 0;
}