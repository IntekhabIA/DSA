#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            data = 0;
            next = NULL;
        }

        Node(int data)
        {
            this->data = data;
            next = NULL;
        }

        //Write a destructor to delete a Node
        ~Node()
        {

        }
};

//I want to insert a node right at the head of linked list
void insertAtHead(Node* &head, Node* &tail, int data)
{
    //if linked list is empty
    if(head == NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //step1:
    Node* newNode = new Node(data);
    //step2:
    newNode -> next = head;
    //step3:
    head = newNode;
}

//I want to insert a node right at the end of linked list
void insertAtTail(Node* &head, Node* &tail, int data)
{
    //if Empty linked list
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

int findLength (Node* &head)
{
    Node* temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp -> next;
        len++;
    }
    return len;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data)
{
    if(head == NULL)
    {
        insertAtHead(head, tail, data);
        return;
    }

    if(position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = findLength(head);
    if(position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    //step 1: find the position pre and curr
    int i = 1;
    Node* pre = head;
    while(i < position)
    {
        pre = pre->next; 
        i++;
    }
    Node* curr = pre->next;

    //step 2: create a new Node
    Node* newNode = new Node(data);

    //step3:
    newNode->next = curr;

    //step 4:
    pre->next = newNode;
}

void print (Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteNode(int position, Node* head, Node* tail)
{
    if(head == NULL)
    {
        cout << "Cannot delete, LL is empty" << endl;
        return;
    }

    if(position == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }
    int len = findLength(head);

    //deleting last node
    if(position == len){
        // step1 : Find prev
        // step 2: prev -> next = NULL
        //step 3: Node* temp = tail
        // step 4: tail = prev
        // step 5: delete temp
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 100);

    insertAtHead(head, tail, 99);
    print(head);

    cout << "\nAfter insertAtPosition function called" << endl;
    insertAtPosition(head, tail, 6, 999);
    print(head);
    
    return 0;
}