#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    //base case if already sorted array
    if(n==0 || n==1){
        return ;
    }
    //1case to be solved by us rest the recursion will do it - largest element ko end mai rakh daiga
    for(int i=0; i<n-1; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sortArray(arr, n-1);
}

int main(){
    int arr[5] = {2,6,3,1,4};
    sortArray(arr, 5);
    //print array
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
      
}