#include<iostream>
using namespace std;

// space pattern problems
//    4
//   43
//  432
// 4321
int main(){
     int n;cin>>n;
     int i=1;
     while(i<=n){
        int space=n-i;
        int j=1;
        while(space){
            cout<<" ";
            space= space-1;
        }
        while (j<=i)
        {
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
     }
}