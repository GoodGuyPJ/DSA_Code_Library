#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{

    int arr[10] = {5, 3, 1, 4, 22, 22, 33, 5, 22, 334};
    int key;
    cin >> key;
    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "found the element";
    }
    else
    {
        cout << "not present";
    }

    return 0;
}