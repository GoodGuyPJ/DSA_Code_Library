#include<bits/stdc++.h>
using namespace std;
 
 void MoveZeros(int arr[], int n){
    vector<int> temp;
    //step 1 if you  are a non zero number then put it in the temp
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    //step 2 put all the temp number in the front then
    int nz= temp.size();
    for(int i=0; i<nz; i++){
        arr[i]= temp[i];
    }
    //step 3  then filling of zeros
    for(int i=nz; i<n; i++){
        arr[i]=0;
    }

//time complexity -> O(2N)
//space complexity -> O(2N)
 }


//*********************Optimal COde*********************************

 void MoveIngZeroOptimalcode(int a[], int n){
    int k= 0;
    while(k<n){
        if(a[k]==0){
            break;
        }
        else{
            k= k+1;
        }
    }

    int i=k;
    int j = k+1;

    while (i<n && j<n)
    {
        if(a[j]!=0){
            swap(a[i], a[j]);
            i++;
        }
        j++;
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
 }
 

 
int main(){
    int arr[]= {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n= sizeof(arr)/sizeof(int);
//****************brute force code
    MoveZeros(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }


//*********************Optimal COde*********************************
    
    int a[]= {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n= sizeof(a)/sizeof(int);
    
    MoveIngZeroOptimalcode(a, n);

 
  return 0;
}