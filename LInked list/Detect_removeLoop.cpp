#include <iostream>
#include<map>
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

//*****************************************************************************************************************************************************************************************************************************************************************************************************************************
 //important
//Detectloop is circular or not
bool detectLoop(Node* tail){
    if(tail==NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = tail;

    while (temp != NULL)
    {
        //cycle is present
        if(visited[temp]==true){
            cout<<"Present cycle on element "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

//floyd detect loop 
Node* floydDtetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            cout<<"CYCLE is preseint at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
    
}

//finding starting node of loop 
Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* interSection = floydDtetectLoop(head);
    Node* slow = head;
    while(slow!= interSection){
        slow = slow->next;
        interSection = interSection->next;
    }
    return slow;
}

//rempve loop
void removeLoop(Node* tail){
    if(tail ==NULL)
    return;

    Node* startofLoop = getStartingNode(tail);
    Node* temp = startofLoop ;
    while (temp->next != startofLoop) {
       temp = temp->next;
    }
    temp ->next = NULL;
    
}




int main()
{
    Node *tail = NULL;
    // inserting a node
    cout << "Inserting a Node" << endl;
    insertNode(tail, 5, 3);
    // insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 8);
    insertNode(tail, 8, 9);
    insertNode(tail, 9, 7);
   // print(tail);

    cout<<"********************************"<<endl;
  
  cout<<"Detect loop is circular or not "<<endl;
    print(tail);


   if(floydDtetectLoop(tail)){
        cout<<"The List is circular "<<endl;
    }
    else{
        cout<<"The list is not circular"<<endl;
    }

    cout<<"********************************"<<endl;

    Node* loop = getStartingNode(tail);
    cout<<"Loop starts at "<<loop->data<<endl;

    removeLoop(tail);
    print(tail);

}