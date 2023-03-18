#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int min =0,max=0;
    for(int i=0; i<n; i++){
        if(arr[i]<arr[i+1]){
            min= arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            max= arr[i];
        }
    }
    cout<<min<<" ";
    cout<<max<<endl;
      
}