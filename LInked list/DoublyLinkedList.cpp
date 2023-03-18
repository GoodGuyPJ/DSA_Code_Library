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