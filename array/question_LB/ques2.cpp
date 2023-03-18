#include<iostream>
using namespace std;

//get MINIMUM number in an array
int getMin(int arr[], int n){
    int mini= INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            mini= arr[i];
        }
    }
    return mini;
}
int getMax(int arr[], int n){
    int maxi= INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi= i;
        }
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
     int minIndex= getMin(arr, n);
     int maxIndex= getMax(arr, n);

     cout<<"Min & Max number are: "<<endl;

    cout<<"Minimum number is "<< minIndex<<endl;
    cout<<"Maximum number is "<< arr[maxIndex]<<endl;
      
}