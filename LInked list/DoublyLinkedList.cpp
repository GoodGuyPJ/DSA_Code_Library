#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//print
void print(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp= temp->next;
    }cout<<endl;
}
//get lenght
 int getLength(Node* head){
    int len =0;
    Node* temp=head;
    while (temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
 }

//inserting at head in double linked list
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head= temp;
}
//insert at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp -> prev = tail;
    tail = temp;
}

//inserting at position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
     if(position==1){
        insertAtHead(head, d);
        return;
    }
    Node* temp= head;
    int count=1;
    while(count<position-1){
        temp= temp->next;
        count++;
    }
    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail, d);
        return;
    }
    //inserting in
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp->next;
    temp->next->prev= nodeToInsert;
    temp->next= nodeToInsert;
    nodeToInsert->prev= temp;
}



int main(){
    Node* node1= new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
      cout<< getLength(head)<<endl;
//at head inserting
    insertAtHead(head, 11);  
    print(head);
// at tail inserting
    insertAtTail(tail, 12);
    print(head);

    //inserting at position
    insertAtPosition(tail, head, 2, 111);
    print(head);
}





























  






//Practice code
/*

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *prev;
  Node *next;

  Node(int d)
  {
    this->data = d;
    this->prev = NULL;
    this->next = NULL;
  }

  ~Node(){
    int val = this->data;
    if(next!=NULL){
      delete next;
      next = NULL;
    }
    cout<<"value "<<val<<endl;
  }
};

// Print
void print(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int getLen(Node *head)
{
  int len = 0;
  Node *temp = head;

  while (temp != NULL)
  {
    len++;
    temp = temp->next;
  }
  return len;
}

void insertAtHead(Node* &tail , Node* &head, int d)
{
  if (head == NULL)
  {
    Node *temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else
  {
    Node *temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
  }
}
void insertAttail(Node* &tail,Node* &head, int d)
{
  if (tail == NULL)
  {
    Node *temp = new Node(d);
    tail = temp;
    head = temp;
  }

  else
  {
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
  }
}

void insertAtPosition(Node *&head, Node *tail, int postion, int d)
{
  if (postion == 1)
  {
    insertAtHead(head,tail, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;
  while (cnt < postion - 1)
  {
    temp = temp->next;
    cnt++;
  }

  if (temp->next == NULL)
  {
    insertAttail(tail,head, d);
    return;
  }

  Node *nodeToinsert = new Node(d);

  nodeToinsert->next = temp->next;
  temp->next->prev = nodeToinsert;
  temp->next = nodeToinsert;
  nodeToinsert->prev = temp;
}

// deletion

void deletion(int pos, Node *&head, Node *&tail)
{
  if (pos == 1)
  {
    Node *temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }

  else
  {
    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;

    while (cnt < pos)
    {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    if (curr->next == NULL)
    {
      tail = prev;
    }
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;

    delete curr;
  }
}

int main()
{

  Node *head = NULL;
  Node *tail = NULL;
   
  

  insertAtHead(tail,head, 1);
  insertAttail(tail,head, 2);
  insertAttail(tail,head, 3);
  insertAttail(tail,head, 4);
  insertAttail(tail,head,  5);

  insertAtPosition(head, tail, 3, 100);

  deletion(4, head, tail);
  print(head);

  return 0;
}
*/