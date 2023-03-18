#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start= 0;
    int end= n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}
int main()
{
    int even[6] ={ 1, 4, 0, 5, -2, 15};
    int odd[5] ={2, 6, 3, 9, 4};
    reverse(even, 6);
    reverse(odd, 5);
    printarray(even, 6);
    printarray(odd, 6);
    return 0;
}