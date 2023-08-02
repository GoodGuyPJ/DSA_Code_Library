#include<bits/stdc++.h>
using namespace std;
/*
//brute force 
if present or not print
bool Twosum(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        i=i+1;
        for(int j=0; j<n; j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}  
*/ 

/*
//brute force 
 return index's

*/ 

vector<int> Twosum(vector<int> &arr, int n, int target){
  map<int, int> mpp;
  for(int i=0; i<n; i++){
    int a= arr[i];
    int more = target - a;
    if(mpp.find(more) != mpp.end()){
        return {mpp[more], i};
    }
    mpp[a] = i;
  }
  return {-1, -1};
} 
 
int main(){
    vector<int> arr ={2, 6, 5, 8, 11};
    int n = 5;
    int target = 14;

    vector<int> ans = Twosum(arr, n, target);
 
     cout<<"This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;


    
 
  return 0;
}