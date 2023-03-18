// Bubble sort
/*
In Insertion sort (like card game)
if select one card the put in hand then 2nd comes the put right or left if it is bigger or lower than the first number.
*/
#include<iostream>
using namespace std;
void Insertionsort(int arr[], int n)
{
for (int i=1; i<n; i++){
        int temp= arr[i];
        int j=i-1;
    for(; j>=0; j--){
        if(arr[j]> temp){
            // shift
            arr[j+1]= arr[j];
        }
        else{
            break;
        }
        
    }
    arr[j+1]=temp;
    
 }
}

int main(){
    
    int n;
    cin>>n;
    int arr[100];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Insertionsort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}