#include <iostream>


int search(int ar[], int lft, int rt, int no)
{
    if(lft<=rt)
    {
        int mid = (lft + rt) / 2;

        if(no == ar[mid])
        {
            return mid;
        }
        else if (no < ar[mid])
        {
            return search(ar, lft, mid - 1, no);
        }
        else
        {
            return search(ar, mid + 1, rt, no);
        }
    }
    return -1;
}

int main()
{
    int ar[] = {2, 4, 6, 8, 12, 24, 26, 30, 44, 52, 66, 78, 90, 112};
    int size = sizeof(ar) / sizeof(ar[0]);
    int no;
    int lft=0;
    int rt = size - 1;
    std::cout<< "Enter number: ";
    std::cin >> no;
    int fun = search(ar, lft, rt, no);

    if (fun == -1)
    {
        std::cout << "Not Found !!" << std::endl;
    }
    else
    {
        std::cout<< "Your number is found at: " << fun << " index" << std::endl;
    }
    return 0;
}