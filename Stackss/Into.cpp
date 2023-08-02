 #include<bits/stdc++.h>
 using namespace std;
  
  
 int main(){

what is stack ?
stack is an abstact data type with a pre defined capacity which means it can store the element of a limited size.




  //creation of stack
  stack<int> s;
 //push in stack
    s.push(2);
    s.push(20);

    //pop
    s.pop();

    cout<<"top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"so stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }
  
   return 0;
 }