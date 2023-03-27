#include<bits/stdc++.h>
using namespace std;
 //***********Butforce code****************
// void leftRotate(int arr[], int n, int d){
//     d= d%n;
//     int temp[d];
//     for(int i=0; i<d; i++){
//         temp[i]= arr[i];
//     }
//     for(int i=d; i<n; i++){
//         arr[i-d]= arr[i];
//     }
//     for(int i=n-d; i<n; i++){
//         arr[i]= temp[i-(n-d)];
//     }
// }
 
//*************Optimal code****************


void leftRotate(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}


int main(){
    cout<<"enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"enter D no of places to rotate: ";
    cin>>d;

    leftRotate(arr, n, d);
    cout<<"left rotated array: ";
    for( int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 
  return 0;
}