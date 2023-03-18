#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
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
// print
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
// get lenght
int getLength(Node *head)
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

// inserting at head in double linked list
void insertAtHead(Node* &tail, Node *&head, int d)
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
// insert at tail
void insertAtTail(Node* &head, Node *&tail, int d)
{
    if(tail==NULL){
        Node* temp = new Node(d);
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

// inserting at position
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    // inserting in
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}


//deletion 
 void deleteNode(int position, Node* &head){
        if(position==1){
            Node* temp = head;
            temp ->next = NULL;
            head = temp->next;
            temp->next =NULL;
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
                current->prev = NULL;
                Previous->next = current->next;
                current->next = NULL;
                delete current;
            
        }
    }




int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    // print(head);
    // cout <<"Length is "<< getLength(head) << endl;
    // at head inserting
    insertAtHead(tail, head, 11);
    insertAtHead(tail, head, 12);
    insertAtHead(tail, head, 13);
    insertAtHead(tail, head, 14);
    cout<<"Inserting At Head"<<endl;
    print(head);
    // at tail inserting
    cout<<"Inserting At tail"<<endl;
    insertAtTail(head, tail, 15);
    print(head);

    // inserting at position
    cout<<"Inserting At Position"<<endl;
    insertAtPosition(tail, head, 6, 111);
    print(head);

    //deletion in DDLL
    cout<<"Deletion in Doubly Linked List "<<endl;
    deleteNode(2, head);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}