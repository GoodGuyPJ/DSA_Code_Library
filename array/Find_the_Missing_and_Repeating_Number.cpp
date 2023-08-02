#include <bits/stdc++.h>
using namespace std;

// Better code
// Aproach 1  - Using hash array
vector<int> MissingRepeatingNUM(vector<int> &A)
{
    vector<int> ans;
    int n = A.size();
    // Using hashing technique
    int Hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        Hash[A[i]]++;
    }

    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++)
    {
        if (Hash[i] == 2)
            repeating = i;
        else if (Hash[i] == 0)
            missing = i;

        if (repeating != -1 && missing != -1)
        {
            break;
        }
    }

    return {repeating, missing};
}

// int main()
// {
//     // vector<int> arr{4, 3, 6, 2, 1, 1};
//     vector<int> arr{1, 2, 3, 2};

//     vector<int> v = MissingRepeatingNUM(arr);
//     cout << "The Repeating and Missing elements are ";
//     for (auto it : v)
//     {
//         cout << it << " ";
//     }

//     return 0;
// }

//***************************
//             Optimal Code 1 using Maths

// vector<int> Optimal_code_one(vector<int> &arr)
// {
//     long long n = arr.size();
//     // s - sn = X - Y
//     // s2  - s2n

//     long long SN = (n * (n + 1)) / 2;
//     long long S2N = (n * (n + 1) * (2*n + 1)) / 6;
//     long long S = 0, S2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         S += arr[i];
//         S2 += (long long)arr[i] * (long long)arr[i];
//     }

//     long long val1 = S - SN; // --> X - Y
//     long long val2 = S2 - S2N;

//     val2 = val2 / val1; // X + Y

//     long long x = (val1 + val2) / 2;
//     long long y = x - val1;

//     return {(int)x, (int)y};
// }

// int main()
// {
//     vector<int> arr{1, 2, 3, 2};

//     vector<int> v = Optimal_code_one(arr);
//     cout << "The Repeating and Missing elements are ";
//     for (auto it : v)
//     {
//         cout << it << " ";
//     }
// }

// XOR method Optimal code

vector<int> Optimal_code_one(vector<int> &arr)
{
    long long n = arr.size();
    int xr = 0;
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ arr[i];
        xr = xr ^ (i + 1);
    }

    int bitNo =0;
    while (1)
    {
        if ((xr & (1 << bitNo)) != 0)
        {
            break;
        }
        bitNo++;
    }
    // ------>> bit manupulation num = xr ^ ~(xr-1)

    int zero = 0;
    int one = 0;

    for (int i = 0; i < n; i++)
    {//part 1 club
        if ((arr[i] ^ (1 << bitNo)) != 0)
        {
            one = one ^ arr[i];
        }
        else
        {//zeroth club
            zero = zero ^ arr[i];
        }
    }

    for(int i =1; i<=n; i++){
        //part of 1 club
        if((i & (1<<bitNo)) != 0){
            one  = one ^ i;
        }
        //zeroth club
        else{
            zero = zero ^ i;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == zero)
        {
            cnt++;
        }
    }

    if (cnt == 2) return {zero, one};

    return {zero, one};
}

int main()
{
    vector<int> arr{4, 3, 6, 2, 1, 1};

    vector<int> v = Optimal_code_one(arr);
    cout << "The Repeating and Missing elements are ";
    for (auto it : v)
    {
        cout << it << " ";
    }
}
