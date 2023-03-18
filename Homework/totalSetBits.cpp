#include<iostream>
#include<math.h>
using namespace std;
int binrytoDec(int n){
    
      int ans=0; 
      int i=0;
    while (n !=0)
      {
        int bit= n&1;
        ans= (bit * pow(10, i) ) +ans;
        n=n>>1;
        i++;
      }
      return ans;
}

int coutone(int n){
    int count=0;
   while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main(){
    int a, b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    cout<<"binary of "<<a<<" is "<<binrytoDec(a)<<endl;
    cout<<"binary of "<<b<<" is "<<binrytoDec(b)<<endl;
      cout<<"No. of set bits in a"<<coutone(a);
      cout<<"No. of set bits in b"<<coutone(b);
      int sum = coutone(a)+ coutone(b);
      cout<<"Total no. of set bits in a and b is "<<sum<<endl;
}