#include<bits/stdc++.h>
using namespace std;
 
 int SearchinrowColumnwise(int arr[][4], int n, int m, int key){
     
    int i=0;
    int j=m-1;
    while(i>=0 && i<n && j>=0 && j<m){
        if(arr[i][j]==key){
            // p.first=i;
            // p.second=j;
 
        }
        else if(arr[i][j]>key){
            j--;
        }
        else if(arr[i][j]<key){
            i++;
        }
    }


    return -1;
 }
 
int main(){
    int n, m;
    cin>>n>>m;
    int arr[4][4];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int key=29;

    cout<<"Index of the key element "<<SearchinrowColumnwise(arr, n, m, key);
 
  return 0;
}