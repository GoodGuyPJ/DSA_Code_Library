#include<bits/stdc++.h>
using namespace std;
 
    //how many time si a sorted array rotated?
 int rotateTime(int arr[], int n){
    int s=0;
    int e= n;
    int mid= s+(e-s)/2;
    int next = (mid+1)%n;
    int prev = (mid+n-1)%n;

    while(s<=e){
        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
            return mid;
        }

       if(arr[s]<=arr[mid]){
        s=mid+1;
       }
       else if(arr[mid]<=arr[e]){
        e= mid-1;
       }
    mid = s+(e-s)/2;
    }
    return -1;
 }


int main(){
    int arr[]= {11,12,15,18,2,5,6,8};
    int n= sizeof(arr)/sizeof(int);
     
    cout<<rotateTime(arr, n)<<endl;


  return 0;
}