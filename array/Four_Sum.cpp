#include <bits/stdc++.h>
using namespace std;

// brute force
vector<vector<int>> FourSum1(vector<int> &nums)
{
    int n = nums.size();
    int target = 0;

    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; k < n; k++)
                {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

// int main(){
//     vector<int> arr {1, 0, -1, 0, -2, 2};

//     vector<vector<int>> ans;
//     ans = FourSum1(arr);
//     cout << "The Four are as follows: " << endl;
//     for (int i = 0; i < ans.size(); i++) {
//         for (int j = 0; j < ans[i].size(); j++){
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//   return 0;
// }

//****************************************************
//                    Better code
// Here we are using Hashing technique

vector<vector<int>> FourSum2(vector<int> &nums)
{
    int n = nums.size();
    int target = 0;

    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> hashset;
            for (int k = j + 1; k < n; k++)
            {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                int fourth = target - (sum);
                if (hashset.find(fourth) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

// int main()
// {
//     vector<int> arr{1, 0, -1, 0, -2, 2};

//     vector<vector<int>> ans;
//     ans = FourSum2(arr);
//     cout << "The Four are as follows: " << endl;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// ***********************************************
//            Optimal code

vector<vector<int>> FourSumOptimal(vector<int> &nums)
{
    int n = nums.size();
    int target = 8;
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j != (i + 1) && nums[j] == nums[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;

                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5};

    vector<vector<int>> ans;
    ans = FourSumOptimal(arr);
    cout << "The Four are as follows: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}