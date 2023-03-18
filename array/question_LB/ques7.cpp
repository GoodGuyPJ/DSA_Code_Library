#include<bits/stdc++.h>
using namespace std;
 
 void rotate(int A[], int n){
    int temp = A[n-1];
    for(int i=n-1; i>0; i--){
        A[i]=A[i-1];
    }
    A[0]= temp;
 }
 
int main(){
    //ques 7 Cyclically rotate an array by one
    int n=5;
    int A[]= {1,2,3,4,5};

    rotate(A, n);
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
 
  return 0;
}