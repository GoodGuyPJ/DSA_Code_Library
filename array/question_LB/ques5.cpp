#include<bits/stdc++.h>
using namespace std;
 void rearrange(int arr[], int n){
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
             
        }
    }
}
 
int main(){
    //Q5
    int arr[]= {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n= sizeof(arr)/sizeof(int);

    int i=0;
    int j = n-1;
   rearrange(arr, n);
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }

  return 0;
}