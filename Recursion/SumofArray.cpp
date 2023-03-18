#include <iostream>
using namespace std;

int SumArrayrec(int *arr, int size)
{
    // base case
    if (size == 0 )
    {
        return 0;
    }
    if (size == 1 )
    {
        return arr[0];
    }
    
    else
    {
        int remainingPart = SumArrayrec(arr+1, size-1);
        int sum = arr[0] + remainingPart;
        //int sum = arr[size-1] + SumArrayrec(arr, size-1);
        return sum;
    }
}

int main()
{
    int arr[5] = {1, 1, 1, 1, 1};
    int size = 5;

    int sum = SumArrayrec(arr, size);

    cout<<"Sum is "<<sum<<endl;

    
}