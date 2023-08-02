#include <bits/stdc++.h>
using namespace std;

// Brute force code
vector<int> majorityElement(vector<int> &arr, int n)
{
    vector<int> ls;

    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
                cnt++;
        }
        if (cnt > (n / 3))
            ls.push_back(arr[i]);
    }
    return ls;
}
// int main()
// {
//     vector<int> arr = {1, 1, 1, 1, 3, 2, 2, 2};
//     int n = arr.size();
//     vector<int> majority;
//     majority = majorityElement(arr, n);
//     cout << "The majority element is" << endl;
//     set<int> s(majority.begin(), majority.end());
//     for (auto it : s)
//     {
//         cout << it << " ";
//     }

//     return 0;
// }



// better code
vector < int > majorityElement2(int arr[], int n) {
    unordered_map<int, int> mpp;
    vector<int> ls;
    int mini  = (int)(n/3)+1;
    for(int i =0 ; i<n; i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]== mini){
            ls.push_back(arr[i]);
        }
        
    }
    

    sort(ls.begin(), ls.end());

    return ls;

}


// int main(){
//      int arr[] = {1,2,2,3,2};
//   vector < int > majority;
//   majority = majorityElement2(arr, 5);
//   cout << "The majority element is ";

//   for (auto it: majority) {
//     cout << it << " ";
//   }
// }





//optimal code
vector < int > majorityElement3(int nums[], int n){
    int cnt1 =0, cnt2 = 0;
    int element1 , element2;
    for(int i=0; i<n; i++){
        if(cnt1==0 && nums[i] != element2){
            cnt1 = 1;
            element1 = nums[i];
        }
        else if(cnt2 == 0 && nums[i] != element1){
            cnt2 =1;
            element2 = nums[i];
        }
        else if(element1 == nums[i]){ cnt1++;}
        else if(element2 == nums[i]) {cnt2++;}
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    cnt1 = cnt2 = 0;
    for(int i =0; i<n; i++){
        if(element1== nums[i]){
            cnt1++;
        }
        else if(element2== nums[i]){
            cnt2++;
        }
    }
    int mini = (int)(n/3)+1;
    if(cnt1 >= mini){
        ans.push_back(element1);
    }
    if(cnt2 >= mini){
        ans.push_back(element2);
    }
    sort(ans.begin(), ans.end());

    return ans;
}

int main(){
     int arr[] = {1,1,1,1, 3,2,2,3, 3, 3,3, 3,3,2};
  vector < int > majority;
  majority = majorityElement3(arr, 14);
  cout << "The majority element is ";

  for (auto it: majority) {
    cout << it << " ";
  }
}