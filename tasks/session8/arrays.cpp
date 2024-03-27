#include<iostream>
#include<array>
int main()
{
    std::array<int,5> store= {10,20,40,30,80};
    for(int i=0; i<=store.size()-1; i++)
    {
        std::cout<< store[i] << " ";
    }
    std::cout<< std::endl;

    for (auto element : store)
    std::cout<< element << " ";
    std::cout<< std::endl;
}