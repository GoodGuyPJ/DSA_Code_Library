#include<iostream>
using namespace std;
void print(int arr[], int n){
    cout<<"size of array is "<<n<<endl;
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<<" ";
    }cout<<endl;
}

bool linearSeach(int arr[], int size, int k) {
    print(arr, size);
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = linearSeach(arr+1, size-1, k);
        return remainingPart;
    }
}


int main(){
    int arr[5] = {2, 4, 6, 97, 8};
    int size = 5;
    int key = 6;
    bool ans = linearSeach(arr, size, key);

    if(ans){
        cout<<"Key is present in the Array."<<endl;
    }
    else{
        cout<<"Key is not present in the Array."<<endl;
    }
      
}