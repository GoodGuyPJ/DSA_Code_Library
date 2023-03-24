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

 
int main(){
    int arr[]= {5, 10,  15, 19, 18};

    int size = sizeof(arr)/sizeof(int);

    int index = PeakElement(arr, size);
    cout<<"The Peak Element index is "<<index<<endl;

  return 0;
}