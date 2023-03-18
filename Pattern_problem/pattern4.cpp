#include<iostream>
using namespace std;

// 1
// 21
// 321
// 4321
// 54321
// 654321
// int main(){
//      int n;cin>>n;
//      int i=1;
     
//      while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             cout<<i-j+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//      }
// }

// 
// pattern
// A
// BC
// CDE
// DEFG
// EFGHI
// FGHIJK
// GHIJKLM
// int main(){
//      int n;cin>>n;
//      int i=1;
     
//      while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             char ch='A' +i +j -2 ;
//             cout<<ch;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//      }
// }



// partten 
// 7
// ABCDEFG
// BCDEFGH
// CDEFGHI
// DEFGHIJ
// EFGHIJK
// FGHIJKL
// GHIJKLM
// int main(){
//      int n;cin>>n;
//      int i=1;
     
//      while(i<=n){
//         int j=1;
//         while (j<=n)
//         {
//             char ch='A' +i +j -2 ;
//             cout<<ch;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//      }
// }



// pattern
int main(){
     int n;cin>>n;
     int i=1;
     
     while(i<=n){
        int j=1;
        char start='A' +n -i;
        while (j<=i)
        {
            cout<<start;
            start++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
     }
} 
