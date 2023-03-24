//Bitonic array -> is monotonically increasing and then monotonically deacreasing
#include<bits/stdc++.h>
using namespace std;
 
 int PeakElement(int arr[], int size){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(mid>0 && mid<size-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
        
        else if(arr[mid-1] > arr[mid]){
            high= mid-1;
        }
        else{
            low= mid+1;
        }
    }
        else if(mid==0){
            if(arr[0]>arr[1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==size-1){
            if(arr[size-1]>arr[size-2]){
                return size-1;
            }
            else{
                return size-2;
            }
        }
    }
    return -1;
 }

 int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e ;
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

int binarySearchdec(int arr[], int s, int e, int key){
    int start = s;
    int end = e ;
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

int main(){
    int arr[] = {-3, 9, 18, 19,20, 17, 5, 1};
    int  key = 1;

    int size = sizeof(arr)/sizeof(int);

    int index = PeakElement(arr, size);
     
    cout<<index<<endl;
    
    cout<<"element found at index "<< binarySearch(arr, 0, index, key) <<endl;
    cout<<"element found at index "<< binarySearchdec(arr, index+1, size-1, key)<<endl ;
 
    
 
  return 0;
}