#include <iostream>
using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySeach(int arr[], int s, int e, int k)
{
    cout<<endl;
    print(arr, s, e);
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return false;
    }
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySeach(arr, mid + 1, e, k);
    }
    else
    {
        return binarySeach(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[10] = {0, 1,2,3,4,5,6,7,8,9};
    int size = 10;
    int key = 9;
    int start = 0;
    int end = size - 1;
    bool ans = binarySeach(arr, 0, 10, key);

    if (ans)
    {
        cout << "Key is present in the Array." << endl;
    }
    else
    {
        cout << "Key is not present in the Array." << endl;
    }
}