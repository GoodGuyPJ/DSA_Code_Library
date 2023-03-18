#include<bits/stdc++.h>
using namespace std;
 
void selectionRec(int *arr,int s, int n){
     
    
    int e= n;
    if(s>=e) return;

    int minIndex= s;
    for(int i=s; i<=n; i++){
        if(arr[i]<arr[minIndex]){
            minIndex= i;
        }

    }
    swap(arr[minIndex], arr[s]);
    
    selectionRec(arr, s+1 , e);
}

int main(){
   int arr[5] = {2,5,1,6,9};
   selectionRec(arr, 0, 4);
   
   for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}