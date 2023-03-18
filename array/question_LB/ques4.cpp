#include<bits/stdc++.h>
using namespace std;
 
 // we are using Dutch national flag Algorithm
void sortColors(int arr[], int n){
    int low= 0;
    int high= n-1;
    int mid =0;
    while (mid<=high)
    {
        switch(arr[mid]){
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            
            //inf element is 1
            case 1:
                mid++;
                break;
            //ifelement is 2
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
    
}

int main(){
    //question 4
    int n=5;
    int arr[]={0,2,1,2,0};

    sortColors(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 
  return 0;
}