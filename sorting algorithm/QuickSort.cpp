#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // now we have to place the pivot element on the right position in an array]
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right part should be in such a way that the on left side the element less than pivot should be put and on the right side the element greater then pivot element should be put
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition of array
    int p = partition(arr, s, e);

    // left part sorting
    quickSort(arr, s, p - 1);

    // right part sorting
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[10] = {2, 10, 7, 9, 6,4,4,101,001, 100};
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "QuickSort of the given are is:-" << endl;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}