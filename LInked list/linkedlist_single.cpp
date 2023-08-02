#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value= this->data;
        //memory free
        if(this-> next != NULL){
            delete next;
            this->next= NULL;
        }
        cout<<"Memory is free "<<endl;
    }
};

//******************** insertAtHead *******************************
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void insertAtTail(Node *&tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}


void insertAtMiddle(Node* &head, int position, int d, Node* &tail){
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
    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp->next;
    temp->next= nodeToInsert;
}


//deletion 
 void deleteNode(int position, Node* &head){
        if(position==1){
            Node* temp = head;
            head= head->next;
            //free memory
            temp->next= NULL;
            delete temp;
        }
        else{
            //deletion of any position node or last node
            Node* current= head;
            Node* Previous= NULL;
            int cnt= 1;
            while(cnt<position){
                Previous= current;
                current= current->next;
                cnt++;
                }
                Previous->next= current->next;
                current->next= NULL;
                delete current;
            
        }
    }



int main() 
{
    // creating a new node
    Node *node1 = new Node(1);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // printing linked list
    Node *head = node1;
    Node *tail = node1;
    // printLL(head);
    // inserting in ll
    // insertAtHead(head, 12);
    // printLL(head);

    // tail insertion
    
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    // printLL(head);
    // insertAtMiddle(head, 2, 0);

    //at position inserting
    
    printLL(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    //deletion in linked list
    cout<<"Deleting Node"<<endl;
    deleteNode(2, head);
    deleteNode(4, head);
    printLL(head);
}





//singly linked list practice here
#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  ~Node()
  {
    int value = this->data;
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout<<"value "<<value<<endl;
  }
};

void Instetathead(Node *&head, int d)
{

  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void Instetattail(Node *&tail, int d)
{

  Node *temp = new Node(d);
  tail->next = temp;
  tail = tail->next;
}

void InsertatMiddle(Node *&tail, Node *&head, int positon, int d)
{

  if (positon == 1)
  {
    Instetathead(head, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;
  while (cnt < positon - 1)
  {
    temp = temp->next;
    cnt++;
  }
  if (temp->next == NULL)
  {
    Instetattail(tail, d);
    return;
  }
  Node *nodetoinsert = new Node(d);

  nodetoinsert->next = temp->next;
  temp->next = nodetoinsert;
}

//********************** Print
void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}





void deletion(int pos, Node* &head,Node* &tail)
{
  if (pos == 1)
  {
    Node *temp = head;
    head = head->next;
temp->next = NULL;

    delete temp;
  }

  else
  {
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;


    while (cnt < pos)
    {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    if(curr->next ==NULL){
      tail = prev;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

int main()
{
  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;
  Instetathead(head, 9);

  print(head);

  Instetattail(tail, 11);

  InsertatMiddle(tail, head, 2, 20);
  print(head);

  deletion(4, head,tail);

  cout << "head " << head->data << endl;
  cout << "tail " << tail->data << endl;
  cout<< "after deletion" <<endl;
  print(head);
  return 0;
}