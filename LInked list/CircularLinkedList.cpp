#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freed " <<value<< endl;
    }
};

// inserting at Position
void insertNode(Node *&tail, int element, int d)
{
    // assuming that the element is present in the list

    // when the list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty lsit
        // assuming that the element is present in list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is representing element wala node for now
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// print
void print(Node *tail)
{
    Node *temp = tail;
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}


//DELETION IN circular list
void deleteNode(Node* &tail, int value){
    if(tail ==NULL){
        cout<<"List empty"<<endl;
        return;
    }
    else{
        //deletion in non empty ccll
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        //if only 1 node is present
        if(curr==prev){
            tail = NULL;
        }
        //when more than 2 nodes are present
       else if(tail==curr){
            tail= prev;
        }

        curr->next= NULL;
        delete curr;
        
    }
}

//Is circular List or not
bool isCircular(Node* head){
    //empty list
    if(head==NULL){
        return false;
    }
     Node* temp = head ->next;
    while(temp!=NULL && temp !=head){
        temp = temp ->next;
    }
    if(temp ==head){
        return true;
    }
    return false;
}


int main()
{
    Node *tail = NULL;
    // inserting a node
    cout << "Inserting a Node" << endl;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    print(tail);

    cout<<"********************************"<<endl;
    cout << "Deleting a Node" << endl;
    // deleteNode(tail, 5);
    // deleteNode(tail, 3);
    print(tail);

    cout<<"Is Circular or not "<<endl;
    
    if(isCircular(tail)){
        cout<<"The List is circular "<<endl;
    }
    else{
        cout<<"The list is not circular"<<endl;
    }
    

}