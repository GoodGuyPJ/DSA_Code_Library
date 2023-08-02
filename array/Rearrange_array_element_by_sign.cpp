#include<bits/stdc++.h>
using namespace std;
 
 vector<int> RearrangebySign(vector<int>& A, int n){
    vector<int> Positive;
    vector<int> negative;

    for(int i = 0; i<n; i++){
        if(A[i]>0){
            Positive.push_back(A[i]);
        }
        else{
            negative.push_back(A[i]);
        }
    }

    for(int i=0; i<n/2; i++){
        A[2*i] = Positive[i];
        A[2*i+1] = negative[i];
    }

    return A;
 }
 
// int main(){
//   vector<int> A {3, -2, 1, -5, 2, -4};

//      int n = sizeof(A)/sizeof(int);

//   vector<int> ans = RearrangebySign(A,n);
  
//   for (int i = 0; i < ans.size(); i++) {
//     cout << ans[i] << " ";
//   }
 
//   return 0;



// }


//Variety 1 leetcode
 vector<int> Variety1(vector<int>& A, int n){
    vector<int> ans(n, 0);

    int posIndex =0;
    int negIndex = 1;

    for(int i = 0; i<n; i++){

        if(A[i]>0){
            ans[posIndex] = A[i];
            posIndex += 2;
        }
        else{
            ans[negIndex] = A[i];
            negIndex += 2;
        }
    }

     

    return ans;
 }

  
int main(){
  vector<int> A {3, -2, 1, -5, 2, -4};

     int n = sizeof(A)/sizeof(int);

  vector<int> ans = Variety1(A,n);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
 
  return 0;

}





//Variety 2  here we have pos > neg  and last pos or neg will be placed at end
 vector<int> Variety2(vector<int>& A, int n){
     vector<int> pos;
     vector<int> neg;

     for(int i =0; i<n; i++){
        if(A[i]>0){
            pos.push_back(A[i]);
        }
        else{
            neg.push_back(A[i]);
        }
     }

     if(pos.size() < neg.size()){
        for(int i=0; i<pos.size(); i++){
            A[2*i] = pos[i];
            A[2*i+1] = neg[i];
        }

        int index = pos.size()*2;
        for(int i= pos.size(); i<neg.size(); i++){
            A[index] = neg[i];
            index++;
        }
     }

     else{
        for(int i=0; i<neg.size(); i++){
            A[2*i] = pos[i];
            A[2*i+1] = neg[i];
        }

        int index = neg.size()*2;
        for(int i = neg.size(); i<pos.size(); i++){
            A[index] = pos[i];
            index++;
        }
     }
     return A;
 }

  
int main(){
  
  int n = 6;
  vector<int> A {1, 2, -4, -5, 3, 4};

  vector<int> ans = Variety2(A,n);
  
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }



  return 0;

}



