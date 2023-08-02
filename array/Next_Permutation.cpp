#include<bits/stdc++.h>
using namespace std;
 
// Brute force code -- will take lot of time 
/* better code -- in this we can use STL libaray next_permutation(a.begin(), a.end());
int arr[] = {1,3,2};
    
    next_permutation(arr,arr+3);//using in-built function of C++
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];

 */


// Optimal code
vector<int> nextGreaterPermutation(vector<int> &A){
   
   int n = A.size();
    int ind = -1;

    for(int i =n-2; i>=0; i--){
        if(A[i]<A[i+1]){
            ind = i;
            break;
        }
    }
    if(ind ==-1){
        reverse(A.begin(), A.end());
        return A;
    }

    for(int i= n-1; i>=ind; i--){
        if(A[i]>A[ind]){
            swap(A[i], A[ind]);
            break;
        }
    }
    reverse(A.begin()+ind+1, A.end());

    return A;


}


int main(){
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]\n";

 
  return 0;
}