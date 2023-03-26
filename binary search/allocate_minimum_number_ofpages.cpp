#include<bits/stdc++.h>
using namespace std;
 
 //is valid 
 bool isValid(int arr[], int n, int students, int mx){
    int student = 1;
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
        if(sum >mx){
            student++;
            sum = arr[i];
        }
    }
    if(student>students){
        return false;
    }
    return true;
 }




 //binary search
 int binarySearch(int arr[], int n, int students){
    int result=-1;
    if(n<students)
        return -1;
    
    int sum =0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }

    int low= *max_element(arr, arr+n);
    int high= sum;
     
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isValid(arr, n, students, mid)==true){
            result = mid;
            high= mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return result;
 }


int main(){
    int arr[]={10,20,30,40};
    int n= sizeof(arr)/sizeof(int);
    int students=2;

    cout<<"Minimum pages each student has to read are: "<<binarySearch(arr, n, students);
    
 
  return 0;
}   