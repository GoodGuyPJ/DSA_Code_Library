//Next Alphabetical Element

#include<iostream>
using namespace std;

char CeilElement(char arr[], int size, char key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    char res = '#';
    while (start <= end)
    {
        if(arr[mid]==key){
           start= mid+1;
        }
        
       else if (key > arr[mid])
        {
           
            start = mid +1;
        }
        else {
            res= arr[mid];
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return res;
}

int main()
{

    char arr[4] = {'a', 'c', 'f', 'h'};
    char element = 'c';
    char found= CeilElement(arr, 4, element);

    cout << "floot element is " << found << endl;
    return 0;
}