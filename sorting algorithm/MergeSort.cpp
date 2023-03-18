#include <iostream>
using namespace std;
//merge array 
void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s+1;
    int len2 = e-mid;

    int *first =new int[len1];
    int *second =new int[len2];
    //copy values
    int mainArrayIndex= s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex =mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }
    // merge 2 sorted arrays
    int index1=0;
    int index2=0;
    mainArrayIndex = s;
    while (index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1<len1)
    {
        /* check for sperate case */
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2<len2)
    {
        /* check for sperate case */
        arr[mainArrayIndex++] = second[index2++];
    }    
}


void mergeSort(int *arr, int s, int e){
    //basecase
    if(s>=e){
        return ;
    }
    int mid = s + (e-s)/2;
    //leftpart sort
    mergeSort(arr, s, mid);

    //right part sort
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}

int main()
{
    int arr[11] = {2, 0, 1, 6, 9,34, 667, 45, 233, 34,6969};
    int n = 11;
    for(int i =0; i<11; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Merge sort of the given array will be:-";
     
    cout<<endl;

    mergeSort(arr, 0, n-1);

    for(int i =0; i<11; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}