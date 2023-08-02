#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    string str = "siddhant";

    stack<char> s;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }
    
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout<<"reverse string is "<<ans<<endl;

//tc - O(N) , sc -> O(N)

  return 0;
}