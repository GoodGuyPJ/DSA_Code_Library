#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid])
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{

    int even[6] = {22, 14, 13, 8, 6, 1};
    int odd[5] = { 23, 18, 11, 4, 1};
    int evenIndex = binarySearch(even, 6, 6);
    cout << "Index of 6 is " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 11);
    cout << "Index of 14 is " << oddIndex << endl;
    return 0;
}