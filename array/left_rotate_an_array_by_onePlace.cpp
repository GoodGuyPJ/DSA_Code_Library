#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int arr[]={1, 2, 3, 4, 5};

    int n=sizeof(arr)/sizeof(int);
    int temp = arr[0];

    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]= temp;
 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }

  return 0;
}