#include<bits/stdc++.h>
using namespace std;
 
 //Q3  kth smallest element
 int Kthsmallest(int arr[], int size,int k){
  priority_queue<int> maxh;

  for(int i=0; i<size; i++){
    maxh.push(arr[i]);
    if(maxh.size()>k){
      maxh.pop();
    }
  }
  return maxh.top();
 }

int main(){
    int arr[] = {7,10,4,20,15};
    int K=4;
    int size= sizeof(arr)/sizeof(int);

    int c= Kthsmallest(arr, size, K);   
   cout<<c<<endl;
 
  return 0;
}