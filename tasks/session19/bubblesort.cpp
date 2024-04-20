#include<iostream>
#include <array>
using namespace std;



void sortBubble(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++){
        for(j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int A[] = {3, 8, 1, 15, 4, 7, 6, 5, 0};
    int L = sizeof(A) / sizeof(A[0]);
    cout<< "The first array: ";
    for (int i = 0; i<L; i++){
        cout<< A[i] << " ";
    }
    cout<<endl;
    sortBubble(A, L);
    cout<< "The sorted array: ";
    for (int i = 0; i<L; i++){
        cout<< A[i] << " ";
    }
    cout<<endl;
    return 0;
}