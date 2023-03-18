#include<iostream>
using namespace std;
void  reverseString(int i, int j, string &s){
    cout<<"Recusive call for string is "<<s<<endl;
    //base case
    if(i>j)
    return ;

    swap(s[i], s[j]);
    i++;
    j--;
    //Recursive call
    reverseString(i, j, s);
}

int main(){
   string s = "abcde";
/*
int i = str[0];
int j = str.length() -1;
*/
   reverseString(0, s.length()-1, s); 
   cout<<s<<endl;
      
}