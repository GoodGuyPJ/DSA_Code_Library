#include<bits/stdc++.h>
using namespace std;

// Brute Force
 int majorityElement(vector<int>& arr){
    int n = arr.size();
    
    for(int i =0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>n/2){
            return arr[i];
        }
    }
    return -1;
 }
 
// int main(){
//     //brute force
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);

//     cout << "The majority element is: " << ans << endl;
 
//   return 0;
// }


//*************** Better code  *******************************
int  majorityElement2(vector<int>& arr){
    int n = arr.size();
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second> (n/2)){
            return it.first;
        }
    }
    return -1;
}

// int main(){

//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement2(arr);

//     cout << "The majority element is: " << ans << endl;
 
//   return 0;
// }



//********************** Moore's voting algorithm  *********************************

int MooresAlgo(vector<int>& arr){
    int n = arr.size();
    int cnt =0;
    int el;
    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt =1;
            el = arr[i];
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1= 0;
    for(int i=0; i<n; i++){
        if(arr[i]==el) cnt1++;
    }
    if(cnt1>(n/2)){
        return el;
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = MooresAlgo(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}