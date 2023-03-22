#include<bits/stdc++.h>
using namespace std;
 int Searchnearlysortedindex(int arr[], int n, int key){
    int s=0;
    int e=n;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(mid-1>=s && arr[mid-1]== key){
            return mid-1;
        }
        else if(mid+1<=e && arr[mid+1]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
              e= mid-2;
        }
        else{
          s= mid+2;
        }
        mid= s+(e-s)/2;
    }
    return -1;
 }
 
int main(){
    int arr[5]={5, 10, 30, 20, 40};
    int find = 5;
    
    cout<<"element is  present at index "<<Searchnearlysortedindex(arr,5, find)<<endl;
    cout<<"element is  present at index "<<Searchnearlysortedindex(arr,5, 10)<<endl;
    cout<<"element is  present at index "<<Searchnearlysortedindex(arr,5, 30)<<endl;
    cout<<"element is  present at index "<<Searchnearlysortedindex(arr,5, 20)<<endl;
    cout<<"element is  present at index "<<Searchnearlysortedindex(arr,5, 40)<<endl;
   
  return 0;
}