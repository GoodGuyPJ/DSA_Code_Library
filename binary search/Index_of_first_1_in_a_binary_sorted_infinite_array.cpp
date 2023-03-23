#include<bits/stdc++.h>
using namespace std;
 
int firstOcc(int arr[], int low, int high, int key)
{
    int s = low, e = high;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}



 int indexofFirstOne(int *arr){
    int low=0;
    int high=1;
    int key=1;

    while(key>arr[high]){
        low= high;
        high= high*2;
    }
   return  firstOcc(arr, low, high,key);
 }


int main(){
    int arr[] = { 0,0,0, 0,0,1, 1, 1, 1} ;
     
    cout<<indexofFirstOne(arr);
    
 
  return 0;
}