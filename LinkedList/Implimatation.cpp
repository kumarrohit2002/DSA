#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void insertAtHead(int data){
        if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
        }else{
            Node* newNode=new Node(data);
            newNode->next=head;
            head=newNode;
        }
        size++;
    }

    void insertAtTail(int data){
        if(head==NULL){
            Node* newNode=new Node(data);
            head=newNode;
            tail=newNode;
        }else{
            Node* newNode=new Node(data);
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }

    void insertAtAnyPosition(int data, int position) {
        if (position <= 0) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 1) {
            insertAtHead(data);
            return;
        }
        int p = 1;
        Node* temp = head;
        while (temp != NULL && p < position - 1) {
            temp = temp->next;
            p++;
        }
        if (temp == NULL) {
            cout << "Position out of bounds!" << endl;
            return;
        }
        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
        size--;
        if (newNode->next == NULL) {
            tail = newNode; 
        }
    }

    void deleteAtHead(){
        if(head==NULL && head->next==NULL){
            delete head;
            head=NULL;
            tail=NULL;
        }
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        size--;
    }

    void deleteAtTail() {
        if (head == NULL) return; 
        if (head->next == NULL) { 
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
        size--;
    }

 void deleteAtAnyPosition(int position) {
    if (position <= 0 || head == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (position == 1) {
        deleteAtHead();
        return;
    }

    Node* temp = head;
    int p = 1;

    while (temp != NULL && p < position - 1) {
        temp = temp->next;
        p++;
    }

    if (temp == NULL || temp->next == NULL) {  
        cout << "Position out of bounds!" << endl;
        return;
    }

    if (temp->next == tail) {
        deleteAtTail();
        return;
    }

    Node* deletedNode = temp->next;
    temp->next = deletedNode->next;
    delete deletedNode;
    size--; 
    }


    void printElement(){
        if(head==NULL) return;
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};



int main(){
    LinkedList sl;
    int n;
    cout<<"Enter the size of the linked list: ";
    cin>>n;

    cout<<"Enter the element of the linked list: "<<endl;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        sl.insertAtHead(data);
    }

    cout<<"Element of Linked List: ";
    sl.printElement();

    // sl.insertAtAnyPosition(10,2);
    // cout<<"10 insert At 2 postion then Elements of Linked List: ";
    // sl.printElement();


    // sl.deleteAtHead();
    // cout<<"delete At Head before  Elements of Linked List: ";
    // sl.printElement();

    // sl.deleteAtTail();
    // cout<<"delete At Tail before  Elements of Linked List: ";
    // sl.printElement();

    sl.deleteAtAnyPosition(6);

    cout<<"Element of Linked List: ";
    sl.printElement();

    return 0;
}