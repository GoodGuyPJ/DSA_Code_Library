#include<bits/stdc++.h>
using namespace std;
 

 //brute force code
//  vector<int> printLeadersBruteForce1(int arr[], int n){
//     vector<int> ans;

//     for(int i =0; i<n; i++){
//         int leader = true;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]>arr[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader == true){
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
//  }
 
// int main(){
//     int n = 6;
//   int arr[n] = {10, 22, 12, 3, 0, 6};

//   vector<int> ans = printLeadersBruteForce1(arr,n);
  
//   for(int i = 0;i<ans.size();i++){
      
//       cout<<ans[i]<<" ";
//   }
  
//   cout<<endl;
 
//   return 0;
// }


// Optimal code


 vector<int> printLeadersBruteForce(int arr[], int n){
    vector<int> ans;
    
    int Leader = INT_MIN;

    for(int i= n-1; i>=0; i--){
        if(arr[i]>Leader){
            ans.push_back(arr[i]);
        }
        Leader = max(Leader, arr[i]);
    }

    sort(ans.begin(), ans.end()); 

    return ans;
 }
 
int main(){
    int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeadersBruteForce(arr,n);
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
 
  return 0;
}



