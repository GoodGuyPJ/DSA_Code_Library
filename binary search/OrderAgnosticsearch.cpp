#include<iostream>
using namespace std;

int ascendingOder(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}


int DecendingOrder(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    
    while (start <= end)
    {
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{

    int arr[6] = {22, 14, 13, 8, 6, 1};
     
     if(arr[0]<arr[1]){
      cout<<  ascendingOder(arr, 6, 22);
     }
     if(arr[0]>arr[1]){
      cout<<  DecendingOrder(arr, 6, 1);
     }
     

    return 0;
}