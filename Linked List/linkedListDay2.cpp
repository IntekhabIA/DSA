#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "Node with value: " << this -> data << " deleted" << endl;
    }
};

void print(Node* &head)
{
    Node* temp = head;
    while ( temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* head)
{
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data)
{
   if(head == NULL) //LL is empty
   {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
   } 
   // LL is non - empty
   //step1: create a node
   Node* newNode = new Node(data);
   //step2:
   newNode -> next = head;
   //step3:
   head-> prev = newNode;
   //step4:
   head = newNode;   
}

void insertAtTail(Node* &head, Node* &tail, int data)
{
    if(head == NULL) // LL empty
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    //LL is not empty
    Node* newNode = new Node(data);
    newNode -> prev = tail;
    tail -> next = newNode;
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position)
{
    if(head == NULL) // LL empty
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //LL is not empty
    if(position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int len = getLength(head);
    if(position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // insertion in middle
    int i = 1;
    Node* prevNode = head;
    while(i < position -1)
    {
        prevNode = prevNode -> next;
        i++;
    }
    Node* curr = prevNode -> next;

    Node* newNode = new Node(data);

    prevNode -> next = newNode;
    newNode -> next = curr;
    curr->prev = newNode;
    newNode->prev = prevNode;
}

void deleteFromPos(Node* &head, Node* &tail, int position) 
{
    if(head == NULL)
    {
        cout << "Linked List is empty" << endl;
        return;
    }
    if(head->next == NULL)
    {
       //single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return; 
    }
    if(position == 1)
    {
        //want to delete the first node
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp -> next = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if(position == len)
    {
        // deleting the last node
        Node* temp = tail;
        tail = tail -> prev;
        tail -> next = NULL;
        temp -> prev = NULL;
        delete temp;
        return;
    }

    //delete from middle of linked list

    int i = 1;
    Node* left = head;
    while(i < position - 1)
    {
        left = left -> next;
        i++;
    }
    Node* curr = left -> next;
    Node* right = curr -> next;

    left -> next = right;
    right -> prev = left;
    curr -> next = NULL;
    curr -> prev = NULL;

    delete curr; 

}

int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third;
    
    
    
    first -> next = second;
    second -> prev = first;

    second -> next = third;
    third -> prev = second;
    
    
    

    print(head);

    insertAtHead(head, tail, 101);
    print(head);

    insertAtTail(head, tail, 301);
    print(head);

    insertAtPosition(head, tail, 510, 5);
    print(head);

    deleteFromPos(head, tail, 6);
    print(head);
    
    return 0;
}