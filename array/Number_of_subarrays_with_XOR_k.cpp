#include <bits/stdc++.h>
using namespace std;

// // BRUTE FORCE
int subarrayWithXorK(int arr[], int n, int XorK)
{
  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    int Xor = 0;
    for (int j = i; j < n; j++)
    {

      for (int k = i; k < j; k++)
      {
        Xor = Xor ^ arr[k];
        if (Xor == XorK)
          cnt++;
      }
    }
  }
  return cnt;
}

int main()
{
  int arr[] = {4, 2, 2, 6, 4};
  int K = 6;
  int n = sizeof(arr) / sizeof(int);
  int countSubArray = subarrayWithXorK(arr, n, K);

  cout << "Number of Subarrays with Xor k  " << countSubArray << endl;

  return 0;
}







//************ BETTER CODE

class Solution
{
public:
  int solve(vector<int> &A, int B)
  {
    long long cnt = 0;
    for (int i = 0; i < A.size(); i++)
    {
      int Curr_Xor = 0;
      for (int j = i; j < A.size(); j++)
      {
        Curr_Xor = Curr_Xor ^ A[j];
        if (Curr_Xor == B)
        {
          cnt++;
        }
      }
    }
    return cnt;
  }
};

int main()
{
  vector<int> A{4, 2, 2, 6, 4};
  Solution obj;
  int totalCount = obj.solve(A, 6);
  cout << "The total number of subarrays having a given XOR k is " << totalCount << endl;
}




//************************************8

//            OPtimal code using Prefix and Map

int Number_of_subarray(vector<int> &arr, int K){
  int Xor =0;
  map<int, int> mpp;
  mpp[Xor]++;
  int cnt =0;

  for(int i =0; i<arr.size(); i++){
    Xor = Xor ^ arr[i];
    int X= Xor ^K;
    cnt += mpp[X];
    mpp[Xor]++;
  }
  return cnt;
}

int main(){
  vector<int> A{5, 6, 7, 8, 9};

    int TotalCount = Number_of_subarray(A, 5);

    cout<<"The total number of subarrays having a given XOR k is "<<TotalCount<<endl;
}