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