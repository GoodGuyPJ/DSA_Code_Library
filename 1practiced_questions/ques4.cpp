#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **********count digit in a number*************

/*
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        int digit= n%10;
        count++;
        n= n/10;


    }
    cout<<count<<endl;

      
}
*/



//*******Reverse a number***********
/*
int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n!=0){
        int digit= n%10;
        rev = rev*10 + digit;
        n= n/10;
    }
    cout<<rev<<endl;

      
}

*/

// check if a number is Palindrome or Not
/*
 int main(){
    int n;
    cin>>n;
    int temp = n;
    int rev=0;
    while(n!=0){
        int digit= n%10;
        rev = rev*10 + digit;
        n= n/10;
    }
    
    
     if(temp == rev){
        cout<<"Palindrome Number"<<endl;
     }   
     else{
        cout<<"Not Palindrome Number"<<endl;
     }
}

*/


//find GCD of two number

/*
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
     
    cout<< gcd(n1, n2) <<endl;




    int num1 =4;
    int num2 =8;
    int ans;
    for(int i=1; i<=min(num1, num2); i++){
        if(num1%i==0 && num2%i==0){
            ans = i;
        }
    }
    cout<<ans;
    
}

*/




//check if a number is Armstrong Number or Not
/*
bool ArmstrongNumber(int n){
    int OriginalNo= n;
    int count = 0;
    int temp = n;
    while(temp != 0){
        count++;
        temp = temp/10;
    }
    int sumofPower = 0;
    while(n != 0){
        int digit = n%10;
        sumofPower += pow(digit, count);
        n /= 10;
    }
    return (sumofPower == OriginalNo);
}


 int main(){
    int n;
    cin>>n;
     
     if(ArmstrongNumber(n)){
        cout<<n<<" this number is armstrong number"<<endl;
     }   
     else{
        cout<<n<<"this number is not armstrong number"<<endl;
     }
}

*/
// ***********Print all Divisors of a given Number ***********
/*
int main(){
    int n;
    cin>>n;
    cout<<"All divisors of given Numbers are"<<endl;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            
            cout<<i<<" ";
        }
    }
    cout<<endl;

}

*/



//*********CHECK IF A NUMBER IS PRIME OR NOT **********
bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    bool ans = isPrime(n);
    if(n!= 1 && ans==true){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Non Prime Number"<<endl;
    }

}