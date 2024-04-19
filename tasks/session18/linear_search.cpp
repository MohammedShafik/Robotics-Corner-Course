#include <iostream>
#include <array>

void find_no(std::array <int, 7> ar, int no)
{
    for (int i=0; i<ar.size(); i++)
    {
        if (no == ar[i])
        {
            std::cout <<"Number is: "<< ar[i]<< " at: "<< i<< std::endl;
        }
    }

}
int main()
{
    std::array <int, 7> ar={5, 6, 8, 10, 45, 12, 8};
    int no= 0;
    std::cout << "Enter your no ";
    std::cin >> no;
    find_no(ar, no);
}