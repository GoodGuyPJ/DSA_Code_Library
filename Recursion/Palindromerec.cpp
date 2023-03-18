#include<iostream>
using namespace std;
bool  PalindromeString(int i, int j, string &s){
    //base case
    if(i>j){
         return true;
    }

    //check palindrome
    if(s[i] != s[j]){
    return false;
    }
     
    //Recursive call
    else{
    return PalindromeString(i+1, j-1, s);
    }
}

int main(){
   string s = "aabaa";

   bool isPalindrome= PalindromeString(0, s.length()-1, s); 
   if(isPalindrome){
    cout<<"Its a Palindrome"<<endl;
   }
   else{
    cout<<"Its not a Palindrome"<<endl;
   }
      
}