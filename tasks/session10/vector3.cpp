#include<iostream>
#include<vector>

void printVector(const std::vector<int> &vec);

int main()
{
    std::vector<int> itvector(4,0);

    for (int i=0; i < itvector.size(); i++)
    {
        itvector[i] = 3;
    }
    printVector(itvector);

    for(auto it=itvector.begin(); it != itvector.end(); ++it)
    {
        *it = 5;
    }
    printVector(itvector);

    for(auto &element : itvector)
    {
        element = 7;
    }
    printVector(itvector);    
}

void printVector(const std::vector<int> &vec)
{
    for (auto element : vec)
    {
        std::cout << element << " ";
    }
    std::cout<< std::endl;
}