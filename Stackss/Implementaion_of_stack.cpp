// #include<bits/stdc++.h>
// using namespace std;
//  stack implementaiton using array
//  class Stack{

//  //Properties
//     public:
//     int *arr;
//     int top;
//     int size;

// //behaviour
//     Stack(int size){
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     //push operation
//     void push(int element){
//         if(size-top > 1){
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout<<"stack is full (stack overflow)"<<endl;
//         }
//     }

//     //pop operation
//     void pop(){
//         if(top>=0){
//             top--;
//         }
//         else{
//             cout<<"stack underflow"<<endl;
//         }
//     }

//     //peek operation
//     int peek(){
//         if(top>=0 && top<size){
//             return arr[top];
//         }
//         else{
//             cout<<"stack is empty"<<endl;
//         }
//     }

//     //empty ckeck
//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//  };

// int main(){
//     Stack st(5);

//     st.push(10);
//     st.push(11);
//     st.push(12);
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.isEmpty()<<endl;
 
//   return 0;
// }




//****************************************************************//

//stack Implementation using Linked list
// LL:-  7 -> 22 -> 4 -> 3 ->NULL
// 1. head will be used for push and pop operations
// 2. Head is now -> top
// 3. stack empty condition -> (top == NULL)
// 4. stack full when -> heap memory is exhausted 
// 5. you can always set a custom size


#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int data;
    Stack* next;
    
    Stack(int d){
        this->data = d;
        this->next = NULL;
    }

    
//Push 
    void push(Stack* &head, Stack* &tail , int value){
        Stack* newNode = new Stack(value);
        if(head==NULL){
            //push element in head
            head = newNode;
            tail= newNode;
            return;
        }
        else{
            //if element is present 
            tail->next = newNode;
            tail = newNode;
        }
    }

    

//pop operation
    void pop(Stack* &head, Stack* &tail){
        if(head==NULL){
            cout<<"stack underflow"<<endl;
        }
        else{
            if(head == tail){
                head = NULL;
                return;
            }
            Stack* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
        }
    }

    //peek
    int peek(Stack* &tail){
        if(tail ==NULL){
            cout<<"stack underflow"<<endl;
        }
        else{
            return tail->data;
        }
    }

    //is  stack  empty
    bool isEmpty(Stack* &head){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    } 
};

void print(Stack* &head){
    Stack* temp = head;
    if(temp==NULL){
        cout<<temp->data<<endl;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

 
int main(){
    Stack* head = NULL;
    Stack* tail = NULL;
    Stack st(0);
    st.push(head, tail, 1);
    st.push(head, tail, 2);
    st.push(head, tail, 3);
    st.push(head, tail, 4);
    st.push(head, tail, 5);
    st.push(head, tail, 6);
    st.push(head, tail, 6000);
    

    print(head);

    cout<<"peek element "<<st.peek(tail)<<endl;

    st.pop(head, tail);
    print(head);

    cout<<"peek element "<<st.peek(tail)<<endl;
    
    st.pop(head, tail);
    st.pop(head, tail);
    st.pop(head, tail);
    st.pop(head, tail);
    st.pop(head, tail);
    print(head);
    st.pop(head, tail);
    
    

    if(st.isEmpty(head)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is NOt  empty"<<endl;
    }

  return 0;
}