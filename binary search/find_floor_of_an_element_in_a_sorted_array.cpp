#include<iostream>
using namespace std;

int FloorElement(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int res = -1;
    while (start <= end)
    {
        
        if (key > arr[mid])
        {
           res= arr[mid];
            start = mid +1;
        }
        else
        {
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return res;
}

int main()
{

    int arr[9] = {1, 2, 3, 4, 8, 10 , 10, 12, 19};
    int element = 19;
    int found= FloorElement(arr, 9, element);

    cout << "floot element is " << found << endl;
    return 0;
}