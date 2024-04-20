#include<iostream>
#include <array>
using namespace std;

void swap(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

void sortSelection(int arr[], int len)
{
    int i, j, min;
    for (i = 0; i < len - 1; i++){
        min = i;
        for(j = i+1; j < len; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
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
    sortSelection(A, L);
    cout<< "The sorted array: ";
    for (int i = 0; i<L; i++){
        cout<< A[i] << " ";
    }
    cout<<endl;
    return 0;
}