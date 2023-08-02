#include<bits/stdc++.h>
using namespace std;
 
 //*******Brute Force code
 int maxSubarraySum(int arr[], int n){
        int maxi = INT_MIN;
        
        for(int i=0; i<n; i++){
            for(int j=i; j<n ;j++){
                int sum =0;

                for(int k = i; k<j; k++){
                    sum += arr[k];
                }
                maxi = max(maxi, sum);
            }
        }
        return maxi;
 }

int main(){
    // int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4}; 
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubarraySum(arr, n); 

    cout << "The maximum subarray sum is: " << maxSum << endl;
     
 
  return 0;
}



//Better code
int maxSubarraySum2(int arr[], int n) {
     int maxi = INT_MIN;
        
        for(int i=0; i<n; i++){
                int sum =0;
            for(int j=i; j<n ;j++){
 
                    sum += arr[j];
 
                maxi = max(maxi, sum);
            }
        }
        return maxi;
}

int main(){
    // int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4}; 
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubarraySum2(arr, n); 

    cout << "The maximum subarray sum is: " << maxSum << endl;
     
 
  return 0;
}


//Optimal Kadanes algorithm

int KadanesAlgo(int arr[], int n){
    long long maxi = LONG_MIN;
    long long sum =0;

    for(int i =0; i<n; i++){
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum =0;
        }
    }
    return maxi;
}

int main(){
    // int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4}; 
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = KadanesAlgo(arr, n); 

    cout << "The maximum subarray sum is: " << maxSum << endl;
     
 
  return 0;
}





//Optimal Kadanes algorithm  sub array 

int KadanesAlgoArr(int arr[], int n){
    long long maxi = LONG_MIN;
    long long sum =0;

    int start =0;
    int ansStart = -1, ansEnd = -1;


    for(int i =0; i<n; i++){

        if(sum ==0) start = i;

        sum += arr[i];

        if(sum > maxi){
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0){
            sum =0;
        }
    }

    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";


    return maxi;
}

int main(){
    // int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4}; 
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = KadanesAlgoArr(arr, n); 

    cout << "The maximum subarray sum is: " << maxSum << endl;
     
 
  return 0;
}