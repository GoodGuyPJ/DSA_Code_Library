// Bubble sort
/*
In Bubble sort we will swap the smallest elemet while movie linearly.
there are round in this sorting.
number of rounds n-1;
smallest element will swap.
here we compare the element in the array: if i>i+1- swap
or if i<i+1 - ignore
*/
#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
for (int i=1; i<n; i++){
//    for round 1 to n-1
    for(int j=0; j<n-i; j++){
        if(arr[j]> arr[j+1])
        {
           swap(arr[j], arr[j+1]);
        }
    }
    
 }
}

int main(){
    
    int n;
    cin>>n;
    int arr[100];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


/* One more step are 
void bubbleSort(vector<int>& arr, int n){
    for(int i =1; i<n; i++){
        bool swapped = false;

        for(int j= 0; j<n-i; j++){

            //process element till n-ith index

            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }

        }
        if(swapped == false ){
            //already sorted 
            break;
        }
    }
}

*/