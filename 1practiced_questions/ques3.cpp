#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int n100, n50, n20, n1;
   n100=n50=n20=n1=0;
   cout<<"notes are"<<endl;
   switch(n>=100){
    case 1: 
            n100 = n/100;
            n-= n100*100;
   }
   switch(n>=50){
    case 1: 
            n50 = n/50;
            n-= n50*50;
   }
   switch(n>=20){
    case 1: 
            n20 = n/20;
            n-= n20*20;
   }
   switch(n>=1){
    case 1: 
            n1 = n/1;
            n-= n1*1;
   }

   cout<<"n100 notes "<<n100<<endl;
   cout<<"n50 notes "<<n50<<endl;
   cout<<"n20 notes "<<n20<<endl;
   cout<<"n1 notes "<<n1<<endl;
      
}