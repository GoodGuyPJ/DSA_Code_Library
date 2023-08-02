// #include<bits/stdc++.h>
// using namespace std;

// // Brute Force code

// int countInversions(vector<int> &arr)
// {
//     int cnt = 0;
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] > 2* arr[j])
//             {
//                 cnt += 1;
//                 cout << "the pairs are " << arr[i] << " " << arr[j] << endl;
//             }
//         }
//     }
//     return cnt;
// }

// int main()
// {
//     vector<int> arr{40, 25, 19, 9, 6, 2};

//     int count = countInversions(arr);

//     cout << "The count Inversions in an array is " << count << endl;

//     return 0;
// }





// ************************************************

// optimal code using 2 pointer

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPair(vector<int> &arr, int low, int mid, int high)
{
  int right = mid + 1;
  int cnt = 0;
  for (int i = low; i <= mid; i++)
  {
    while (right <= high && arr[i] > 2 * arr[right])
    {
      right++;
    }
    cnt += (right - (mid + 1));
  }
  return cnt; 
}

int mergeSort(vector<int> &arr, int low, int high)
{
  int cnt = 0;
  if (low >= high)
    return cnt;
  int mid = (low + high) / 2;
  cnt += mergeSort(arr, low, mid);      // left half
  cnt += mergeSort(arr, mid + 1, high); // right half
  cnt += countPair(arr, low, mid, high);
  merge(arr, low, mid, high); // merging sorted halves
  return cnt;
}


 

int main()
{
  vector<int> arr{4, 1, 2, 3, 1};
  int n = 5;

  int ans = mergeSort(arr, 0, n - 1);
  cout << "The total inversions are " << ans << endl;

  return 0;
}