#include<bits/stdc++.h>
using namespace std;
 
 void slove(stack<int> &inputStack, int count, int size){
    //base condition
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    intputStack.pop();

    solve(inputStack, count+1, size);

    inputStack.push(num);
 }
 
int main(){
     
    int size = sizeof(arr)/sizeof(int);
 

    int count =0;

    slove(arr, count, size);
 
  return 0;
}