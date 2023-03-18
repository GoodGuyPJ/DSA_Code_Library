#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sort012(int arr[], int n){
    int l=0, m=0, h= n-1;
    while (m<=h)
    {
        if(arr[l]==0){
            swap(arr[l], arr[m]);
            l++;
            m++;
        }
        if(arr[m]==1){
            m++;
        }
        if(arr[h]==2){
            swap(arr[m], arr[h]);
            h--;
        }
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort012(arr, n);
    // cout<<"Sorted array is "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
      
}