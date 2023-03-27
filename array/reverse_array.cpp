#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
    swap(arr[start], arr[end]);
    
    start++;
    end--;
}
}
void printarray(int arr[], int n ){
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[5]= {3, 4, 6, 7,8};
    reverse(arr1, 5);
    printarray(arr1, 5);
}