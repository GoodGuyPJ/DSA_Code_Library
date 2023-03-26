#include <bits/stdc++.h>
using namespace std;

    /*
        // int arr[]= {1, 2, 4, 7, 7, 5};
        int arr[]= {1, 7, 7, 7, 7};
        int arr[]= {0, 7, 4, 47, 7};
        int arr[]= {7, 7, 7, 7, 7};//-->worst case of there is no second largest case


        int n=sizeof(arr)/sizeof(int);
        int largest = INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                largest= arr[i];
            }
        }
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
           cout<<arr[i]<<"  ";
        }
        int secondLargest= -1;
        for(int i=n-2; i>=0; i--){
            if(arr[i]!=largest){
                secondLargest=arr[i];
                break;
            }
        }

        cout<<secondLargest;


    time complexity ->(nlogn)

    */

    /*
       //************ Better solution*****
       int arr[]= {1, 2, 4, 7, 7, 5};
       int n=sizeof(arr)/sizeof(int);
       int largest = arr[0];
       for(int i=0; i<n; i++){
           if(arr[i]>largest){
               largest= arr[i];
           }
       }

       int SecondL=-1;
       for(int i=0; i<n; i++){
           if(arr[i]>SecondL && arr[i]!=largest){
               SecondL= arr[i];
           }
       }
       cout<<"second Largest element "<<SecondL<<endl;


    //time complexity -> O(2n)


   */

   
   
   
    //""""""""""Now Optimal code """"""""""""""

int secondLargest(int a[], int n){
    int largest = a[0];
    int slargest = -1;
    for(int i=1; i<n; i++){
        if(a[i]>largest){
            slargest= largest;
            largest= a[i];
        }
        else if(a[i]<largest && a[i]>slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(int a[], int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(a[i] < smallest){
            ssmallest= smallest;
            smallest= a[i];
        }
        else if(a[i]!= smallest && a[i]<ssmallest){
            smallest = a[i];
        }
    }
    return ssmallest;
}


int main()
{
    int arr[] = {1, 2, 4, 0, 7, 5};
    int n = sizeof(arr) / sizeof(int);

    int slargest = secondLargest(arr, n);
    int ssmallest = secondSmallest(arr, n);

    cout<<"secondlargest "<<slargest<<endl;
    cout<<"secondsmallest "<<ssmallest<<endl;
}