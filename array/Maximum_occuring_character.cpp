#include<iostream> 
using namespace std;


char getMaxOccCharacter(string s){
     int arr[26]= {0};
// create an array of count of characters
     for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int num = 0; 
       
        if(ch >= 'a' && ch<='z'){  
            num = ch -'a'; //lowrcase
        }
        else{ //uppercase
            num = ch - 'A';
        }
        arr[num]++;
     }
     int max=-1, ans = 0;
     for(int i=0; i<26; i++ ){
        if(max < arr[i]){
           ans = i;
         max = arr[i];
        }
     }
     char finalAns = 'a' +ans;
     return finalAns;
}

int main( ) {

    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
    

    return 0;
}