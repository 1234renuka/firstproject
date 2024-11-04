#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node*next;

    Node(){
        this->data=0;
        this->next=NULL;

    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(Node* &head, Node* &tail,int data){
   if(head == NULL){
        Node*newNode=new Node(data);
        head = newNode;
        tail =newNode;
       
     }
    Node* newNode =new Node(data);
    newNode->next=head;
     if(head==NULL){
        tail=newNode;
    }
    else{
        Node* newNode =new Node(data);
        newNode -> next =head;
          head=newNode;
    }
    
}

void insertAttail(Node* &head,Node* &tail,int data){
     //crate a node
     if(head == NULL){
        Node*newNode=new Node(data);
        head = newNode;
        tail =newNode;
        return;

     }
    Node*newNode=new Node(data);
    //connect with tail node
    tail->next=newNode;
    //update tail;
    if(head==NULL){
        head=newNode;
    }
    tail =newNode;
}
void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void insertAtPosition(int data, int position, Node* &head , Node* &tail){
    if(head ==NULL){
        Node* newNode =new Node(data);
        head =newNode;
        tail =newNode;
        return;
    }
    int i =1;
    Node* prev = head;
    while(i < position){
        prev =prev ->next;
        i++;
    }
    Node* curr =prev -> next;

    Node* newNode = new Node(data);

    newNode ->next =curr;

    prev->next =newNode;
}

int main(){
    Node*head=NULL;
    Node*tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAttail(head,tail,77);

    

    insertAtPosition(101,1,head,tail);
    print(head);
    cout<<endl;
    cout<<"head :"<<head-> data <<endl;
    cout<<"tail :"<<tail->data<<endl;
    return 0;
}