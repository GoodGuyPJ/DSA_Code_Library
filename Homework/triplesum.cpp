#include <bits/stdc++.h>
using namespace std;

// returns true, if there is triplet with sum equal
// to 'target' exists in arr[] and print that triplet also.
bool findTriplet(int arr[], int n, int target)
{
	// Fix the first element as arr[i]
    for (int i = 0; i < n - 2; i++)
    {

        // Fix the second element as arr[j]
        for (int j = i + 1; j < n - 1; j++)
        {

            // Now find the third value
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << "Triplet is " << arr[i] <<
                        ", " << arr[j] << ", " << arr[k];
                    return true;
                }
            }
        }
    }

    // No triplet was found
    return false;
}

/* Driver code */
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int target = 9;
	int n = sizeof(arr) / sizeof(arr[0]);
	findTriplet(arr, n, target);
	return 0;
}
