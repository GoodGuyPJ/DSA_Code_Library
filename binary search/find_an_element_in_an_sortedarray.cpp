//find an elemnt in an sorted array

#include<bits/stdc++.h>
using namespace std;
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
 

int binarySearch(int arr[], int start , int end, int key){
     
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



int main(){
    int n;
    
    cout<<"enter n ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int element = 6;

    int index = rotateTime(arr, n);

     
       cout<< "elemet is" <<binarySearch(arr,0, index-1, element)<<endl;
     
   
      cout<<"elemnt is " <<binarySearch(arr, index, n-1, element)<<endl;
      
    if(binarySearch(arr,0, index-1, element) || binarySearch(arr, index, n-1, element)){
        cout<<"element is Present  in the array"<<endl;
        
    }
    else{
        cout<<"not Present in array"<<endl;
    }
 
  return 0;
}