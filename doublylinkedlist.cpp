#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;

    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    };

void print(Node* &head){
    Node* temp=head;


    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int getLength(Node* head){
    int len =0;
    Node* temp =head;


     while(temp != NULL){
        temp =temp->next;
        len++;

     }
       return len;
     
}

void insertAtHead(Node* &head, Node* &tail,int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head =newNode;
        tail=newNode;
        


    }
    else{

         Node* newNode=new Node(data);

         newNode->next=head;

         head->prev =newNode;

         head =newNode;


    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    //ll is empty
      if(head==NULL){
        Node* newNode =new Node(data);
        head =newNode;
        tail =newNode;

      }
      else{
        //ll is not empty
        Node* newNode=new Node(data);

        tail->next=newNode;

        newNode->prev=tail;
        tail = newNode;

        
      }
}

void insertAtPosition(Node* &head, Node* &tail, int data){
    if(head==NULL)
   {
    Node* newNode =new Node(data);
        head =newNode;
        tail =newNode;
   }
    else{
        //ll is not empty
        if(position == 1){
            insertAtHead(head,tail,data);
            return;

        }
        int len =getLength(head);
        if(position >=len){
            insertAtTail(head,tail,data);
            return;

        }
        int i =1;
        Node* prevNode=head;
        while(i<position-1){
            prev=prevNode->next;
            i++;
        }      
        Node* curr =prevNode;
         
         //step2: create a Node
        Node* newNode=new Node(data);
         
         //step 3
         
        prevNode->next=newNode;
        newNode->prev=prevNode;
        curr->prev=newNode;
        newNode->next=curr;
}

int main(){

    Node* first =new Node(10);
    Node* second =new Node(20);
    Node* third = new Node(30);
    Node* head =first;
    Node* tail=third;


    first->next =second;
    second->prev=first;


    second->next =third;
    third->prev =second;

    print(first);
    cout<<endl;

    insertAtHead(head,tail,101);

    cout<<endl;
    print(head);
    
     insertAtTail(head,tail,501);

    cout<<endl;
    print(head);
    
    return 0;
}