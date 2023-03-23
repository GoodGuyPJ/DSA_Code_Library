#include<bits/stdc++.h>
using namespace std;
 
 int minDiff(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == key){
            return 0;
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

    int ele1= abs(arr[start]-key);
    int ele2= abs(arr[end]-key);

    return min(ele1,ele2);
     
}


int main(){
    int arr[]= {1, 3, 8, 10, 12, 15};
    int key=12;
    int n= sizeof(arr)/sizeof(int);
    cout<<minDiff(arr, n, key);
 
  return 0;
}