#include<bits/stdc++.h>
using namespace std;
  
int main(){
    int i, j, r;
 
    cin>>r;

    for(i=1; i<=r; i++){
        for(j=1; j<=i; j++){ 
            if(j==1 || j==i || i==r){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
 
  return 0;
}