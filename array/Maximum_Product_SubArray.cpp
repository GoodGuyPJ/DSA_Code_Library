#include <bits/stdc++.h>
using namespace std;

//Brute force -- O(N)3

int maxProductSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int product =1;
            for(int k =i; k<=j; k++){
                product *= nums[k];
                maxi =  max(maxi, product);
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray: " << maxProductSubArray(nums);
    return 0;
}






//**************************************************************

#include <bits/stdc++.h>
using namespace std;

// Brute force -- O(N)2

int maxProductSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = i; j < n; j++)
        {
            product *= nums[j];
            maxi = max(maxi, product);
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray: " << maxProductSubArray(nums);
    return 0;
}




//*************************************************8


// now optimal 

#include<bits/stdc++.h>
using namespace std;
 
int maxProductSubArray(vector<int> &nums){
    int n = nums.size();
    int prefix= 1;
    int suffix = 1;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        if(prefix == 0) prefix =1;
        if(suffix == 0) suffix =1;

    prefix = prefix * nums[i];
    suffix = suffix  * nums[n-i-1];
    
        ans = max(ans, max(prefix, suffix));
    
    }
    return ans;
}

 
int main(){
    vector<int> nums = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray: " << maxProductSubArray(nums);
    return 0;
}