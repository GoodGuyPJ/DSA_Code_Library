#include <iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 <size){
            swap(arr[i], arr[i+1]);
        }
    }
}


int main()
{
      int arr[5]= {2,1, 4,3,5};
      printarray(arr, 5);
      swapAlternate(arr, 5);
      cout<<endl;
      cout<<endl;
      cout<<endl;
      printarray(arr, 5);

    return 0;
}