#include<iostream>
using namespace std;
int APterm(int n){
    int ap = (3* n) +7;
    return ap;
}

int main(){
    int n;
    cin>>n; 
    cout<< " The nth term in AP is "<<APterm(n)<<endl;
      
}