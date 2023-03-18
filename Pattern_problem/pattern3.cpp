#include<iostream>
using namespace std;

// start pattern
// int main(){
//      int n;cin>>n;
//      int i=1;
//      while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//      }
// }


// pattern 
// 1
// 22
// 333
// 4444
// 55555
// int main(){
//      int n;cin>>n;
//      int i=1;
//      while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//      }
// }

// pattern 3
1
23
345
4567
56789

int main(){
     int n;cin>>n;
     int i=1;
     
     while(i<=n){
        int value=i;
        int j=1;
        while (j<=i)
        {
            cout<<value;
            value++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
     }
}


