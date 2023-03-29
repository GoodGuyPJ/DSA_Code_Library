#include<bits/stdc++.h>
using namespace std;

//*********BRUTEFORCE CODE **************** 
 int number(int arr[], int n){
    for(int i=0; i<n; i++){
        int num=arr[i];
        int cnt =0;
        for(int j=0; j<n; j++){
            if(arr[j]==num){
                cnt++;
            }
        }
        if(cnt==1)
        {
            return num;
        }
    }
    return -1;
 }

int main(){
    int arr[]= {1,1, 2, 3, 3, 4, 4};
    int n=sizeof(arr)/sizeof(int);

    int ans = number(arr, n);
    cout<<ans;
 
  return 0;
}

*********better code using hash **********

int Usinghash(int arr[], int n){
    int maxi = arr[0];
    
    for(int i=0; i<n; i++){
        maxi= max(maxi, arr[i]);    
    }
    int hash[maxi] = {0};
    
    for(int i =0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]= {1,1,2, 3, 3, 4, 4};
    int n=sizeof(arr)/sizeof(int);

    int ans =Usinghash(arr, n);
    cout<<ans;
 
  return 0;
}


// ********** Uisng set code ************
int usingMap(int arr[], int n){
    map<long long, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int arr[]= {1,1,2, 3, 3, 4, 4};
    int n=sizeof(arr)/sizeof(int);

    cout<<usingMap(arr, n)<<endl;
 
  return 0;
}

// //*************************OPtimal code **************
int main(){
    int arr[]= {1,1,2, 3, 3, 4, 4};
    int n=sizeof(arr)/sizeof(int);

    int XOR =0;
    for(int i=0; i<n; i++){
        XOR = XOR^arr[i];
    }
    cout<<"Unique element: "<<XOR<<endl;


 
  return 0;
}
