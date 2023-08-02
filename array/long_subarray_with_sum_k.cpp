#include<bits/stdc++.h>
using namespace std;
 
 //*****Brute force code
 int LongestSubarr1(int arr[], int n, int k){
    int maxLen =0;
    for(int i=0; i<n; i++){
        int sum =0; 
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum==k){
                maxLen = max(maxLen, (j-i+1));
            }
        }
    }
    return maxLen;
 }
 
int main(){
    int arr[] = {7,1,6,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 7;

    cout<<"Length of longest subarray with sum K is: ";
    cout<<LongestSubarr1(arr, n, k);
 
  return 0;
}


//Better code with Positive and Negative number and it is also optamized code for +ve, -ve
int LongestSubarr2(int arr[],int n,  long long k){
    map<long long, int> preSumMap;
    long long sum =0;
    int maxLen = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum==k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if( preSumMap.find(rem) != preSumMap.end()){
            int len = i- preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main(){

    // int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int arr[] = {1,7,0,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    cout<<"Length of longest subarray with sum K is: ";
    cout<<LongestSubarr2(arr, n, k);

}




//*************************** Optimal code*********************************
int LongestSubarr3(int arr[], int n, int k){
    int left =0, right =0;
    long long sum = arr[0];
    int maxLen = 0;
    while (right<n)
    {
        while(left<= right && sum>k){
            sum -= arr[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right<n){
            sum+= arr[right];
        }
    }
    return maxLen;
}

int main(){
    int arr[] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    // int arr[] = {1,7,0,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    cout<<"Length of longest subarray with sum K is: ";
    cout<<LongestSubarr3(arr, n, k);
}