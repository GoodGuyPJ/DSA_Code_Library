#include<bits/stdc++.h>
using namespace std;
 
 class Node{
  public:
  int data;
  Node* next;

  Node(int d){
    this->data = d;
    this->next = NULL;
  }
  
  ~Node() {
    int value = this->data;
    if(this->next!=NULL){
      delete next;
      next = NULL;
    }
    cout<<"value "<<value<<endl;

  }

 };

 void insertAtTail(Node* &tail, int element,  int d){
  if(tail ==NULL){
    Node* temp = new Node(d);
    tail = temp;
    temp->next = temp;
  }
  else{
    Node* curr = tail;
    while(curr->data != element){
      curr = curr->next;
    }

    Node* temp = new Node(d);
    temp ->next = curr->next;
    curr->next = temp;
  }
 }
 
void print(Node* tail){
  Node* temp = tail;
  
  do{
    cout<<tail->data<<" ";
    tail = tail->next;
  }while(tail != temp);
  cout<<endl;

}


void deletion(int ele){
  
}

int main(){
    Node* tail = NULL;

    insertAtTail(tail, 0, 3);
    insertAtTail(tail, 3, 4);
    insertAtTail(tail, 4, 5);
    insertAtTail(tail, 5, 6);
    insertAtTail(tail, 6, 7);
    print(tail);
 
  return 0;
}