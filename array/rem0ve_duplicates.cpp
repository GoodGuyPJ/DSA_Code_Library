#include<bits/stdc++.h>
using namespace std;
 
 int remove_duplicates(int arr[], int n){
     set< int >  st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int k = st.size();
    int index =0;
    for(int it: st){
        arr[index++]=it;
    }
    return k;
 }

 
int main(){
    int arr[] = {1,1, 2, 2, 2, 3, 3};
    int n= sizeof(arr)/sizeof(int);
 

/****************Buteforce approch**************************/
  
    int count = remove_duplicates(arr, n);
    cout<<"array after removing duplicates is "<<endl;
    for(int i=0; i<count; i++){
        cout<<arr[i]<<" ";
    }
   time complexity -> NlogN + N
   space complexity -> O(N)



/***********************OPTIMAL SOLUTION*****************/
 int i =0;
 for(int j =0; j<n; j++){
    if(arr[i+1]!=arr[j]){
        arr[i+1] = arr[j];
        i++;
    }
 }
    cout<<i;
 
//time complexity-> O(N)
//space complexity-> O(1)


  return 0;
}