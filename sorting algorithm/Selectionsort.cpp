// selection sort
/*
In selection sort there are different rounds/passes:-
   pick smallest element from array and then shwap it to the right place or usko right jagah par place kar daina 

eg:-
 


*/
#include<iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
for (int i=0; i<n-1; i++){
    int minIndex =i;
    for(int j=i+1; j<n; j++){
        if(arr[j]< arr[minIndex])
        {
            minIndex=j;
        }
    }
    swap(arr[minIndex], arr[i]);
 }
}

int main(){
    
    int n;
    cin>>n;
    int arr[100];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionsort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}