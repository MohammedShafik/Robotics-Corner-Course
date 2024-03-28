#include<iostream>
#include<vector>

void print(int item)
{
    std::cout << "Value is: " << item << std::endl;
}

void dvdr(const std::vector<int> &vals, void(*fun)(int))
{
    for(int item : vals)
        fun(item);
}


int main()
{
    std::vector<int> vals={10,15,22,14,31,52};
    dvdr(vals,print);
    return 0;
}