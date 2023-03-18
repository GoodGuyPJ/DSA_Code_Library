#include<iostream>
using namespace std;
 bool checkPalindrome(char a[], char b[]){
     int s=0;
     int e=n-1;
     while(s<=e){
          if(a[s] != a[e]){
               return 0;
          }
          else{
               s++;
               e--;
          }
     }
     return  1;
 }

// reverse character array
void reverse(char name[], int n){
     int s=0;
     int e=n-1;
     while(s<e){
          swap(name[s++], name[e--]);
     }
}
// get length
int getLength(char name[]){
     int count=0;
     for(int i=0; name[i]!= '\0'; i++){
          count++;
     }
     return count;
}

int main(){
     char name[20];
     cin>>name;
     int len= getLength(name);
     cout<<"Length: "<<len<<endl;
     reverse(name, len);

     cout<<"Palindrome or not "<<checkPalindrome(name, len)<<endl;
}