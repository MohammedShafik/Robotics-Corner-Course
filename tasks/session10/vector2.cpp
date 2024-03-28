#include<iostream>
#include<vector>

void inputVector(std::vector<int> &vvect);
void printVector(const std::vector<int> &vvect);

int main()
{
        std::vector<int> vvect(5,0);
        std::cout<< "Enter values: "<< std::endl;
        inputVector(vvect);
        std::cout<< "Printing: "<< std::endl;
        printVector(vvect);
        std::cout<< "Your Input: "<< vvect.size() << std::endl;
}

void inputVector(std::vector<int> &vvect)
{
    for(auto &element : vvect)
    {
        std::cin >> element;
    }
}

void printVector(const std::vector<int> &vvect)
{
    for(auto element : vvect)
    {
        std::cout << element << " ";
    }
    std::cout<< std::endl;
}