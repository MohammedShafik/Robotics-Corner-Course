#include<iostream>
#include<vector>
#include <functional>

//void dvdr(const std::vector<int> &vals, void(*fun)(int))
void dvdr(const std::vector<int> &vals, std::function<void(int)>fun)

{
    for(int item : vals)
        fun(item);
}


int main()
{
    std::vector<int> vals={1,15,22,14,31,52};
    int i =5;
    dvdr(vals,[&](int item){
        i =3;
        std::cout << "Value is: " << item * i<< std::endl;
    });
    return 0;
}