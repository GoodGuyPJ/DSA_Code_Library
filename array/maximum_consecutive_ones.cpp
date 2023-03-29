#include<bits/stdc++.h>
using namespace std;
 
 int consecutiveOnes(int arr[], int n){
        int maxi =0, count =0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                count++;
                maxi= max(maxi, count);
            }
            else{
                count=0;
            }
        }
        return maxi;
 }
 
int main(){
    int arr[]= {1,1,0,1,1,1,0,1};
    int n= sizeof(arr)/sizeof(int);

    cout<<consecutiveOnes(arr, n);
 
  return 0;
}