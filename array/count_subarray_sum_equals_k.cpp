#include <bits/stdc++.h>
using namespace std;

// Brute force code
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int s = i; s <= j; s++)
            {
                sum += arr[s];
            }
            if (sum == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << endl;

    return 0;
}



//better code removing 1 loops of s


int findAllSubarraysWithGivenSum2(vector<int> &arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
         int sum = 0;
        for (int j = i; j < n; j++)
        {
 
                sum += arr[j];
            
            if (sum == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    int cnt = findAllSubarraysWithGivenSum2(arr, k);
    cout << "The number of subarrays is: " << cnt << endl;

    return 0;
}


//Optimal code --> using Prefix sum 

int findAllSubarraysWithGivenSum3(vector<int> &arr, int k)
{
    int n = arr.size();
    int cnt = 0;
    map<int, int> mpp;
    int preSum =0;
    mpp[0] = 1;
    for (int i = 0; i < n; i++)
    {
         preSum += arr[i];

         int remove = preSum - k;

         cnt += mpp[remove];

         mpp[preSum] += 1;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    int cnt = findAllSubarraysWithGivenSum3(arr, k);
    cout << "The number of subarrays is: " << cnt << endl;

    return 0;
}