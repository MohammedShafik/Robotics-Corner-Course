#include<iostream>
using namespace std;

void sortInsert(int arr[], int len)
{
    for (int idx = 1; idx < len; idx ++){
        int key = arr[idx];
        int j = idx -1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    sortInsert(A, L);
    cout<< "The sorted array: ";
    for (int i = 0; i<L; i++){
        cout<< A[i] << " ";
    }
    cout<<endl;
    return 0;
}