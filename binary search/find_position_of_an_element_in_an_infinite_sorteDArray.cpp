#include<bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int low, int high, int key){
     int start=low;
     int end= high;
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

 
 
 int InfiniteLoopElement(int arr[], int n, int key){
    int low=0;
    int high= 1;

    int position;

    if(key==arr[0]){
        return 0;
    }
    if(key==arr[1]){
        return 1;
    }
    while(key>arr[high]){
        low= high;
        high= high*2;

       position= binarySearch(arr, low, high, key);
    }
    return position;
 }


int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int key = 2;
    cout<<InfiniteLoopElement(arr, n, key);

 
  return 0;
}