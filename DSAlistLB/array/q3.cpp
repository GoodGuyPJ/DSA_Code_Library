#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kthsmallest(int arr[], int n, int k){
    int s=0;
    int e= n-1;
   sort(arr, arr+e+1);
   return arr[k-1];
}

int main(){
    int n;
    int k;
    cin>>k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"the kth element is " <<kthsmallest(arr,n,k);

      
}