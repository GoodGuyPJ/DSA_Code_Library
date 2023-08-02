#include <bits/stdc++.h>
using namespace std;

//brute force
vector<vector<int>> threeSum1(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    vector<int> temp;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                temp.clear();
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                }
                if (temp.size() != 0)
                {
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;
    ans = threeSum1(arr);
    cout << "The triplets are as follows: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }

    return 0;
}







//*****************************************************************8

//Better code
// using hashing 

vector<vector<int>> threeSum2(vector<int> &nums){
    set<vector<int>> st;
    int n = nums.size();
    for(int i=0; i<n; i++){
        set<int> hashset;
        for(int j=  i+1; j<n; j++){
            int third = -(nums[i] + nums[j]);
            if(hashset.find(third) != hashset.end()){
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main(){
    vector<int> arr{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;
    ans = threeSum2(arr);
    cout << "The triplets are as follows: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }

    return 0;
}




//optimal using 2 pointer aproach
vector<vector<int>> threeSum2(vector<int> &nums){
    int n = nums.size();

    vector<vector<int>> answer;
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++){
        if(i>0 && nums[i] == nums[i-1]) continue;

        int j = i+1;
        int k = n-1;

        while(j < k){
            int sum = nums[i] +nums[j] + nums[k];
            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                answer.push_back(temp);
                j++;
                k--;

                while(j<k && nums[j] == nums[j-1]) j++;
                while(j<k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    
    return answer;
}

int main(){
    vector<int> arr{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans;
    ans = threeSum2(arr);
    cout << "The triplets are as follows: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }

    return 0;
}




