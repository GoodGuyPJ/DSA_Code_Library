#include<bits/stdc++.h>
using namespace std;
 
 //*****Brute force code
 int LongestSubarr(int arr[], int n, int k){
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
    cout<<LongestSubarr(arr, n, k);
 
  return 0;
}


//Better code with Positive and Negative number and it is also optamized code for +ve, -ve


int main(){

    int arr[] = {7,1,6,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;
    cout<<"Length of longest subarray with sum K is: ";
    cout<<LongestSubarr(arr, n, k);

}
