// Doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    Node *prev;
    Node *next;
};
Node *head; // Global variable 
Node *GetnewNode(int x){
    Node *newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
// Inserting at the begining
void InsertAtHead(int x){
Node *newNode = GetnewNode(x);
// When the list is empty
if(head == NULL){
    head=newNode;
    return;
}
head->prev = newNode;
newNode->next=head;
head=newNode;
}
// Inserting at the end
void InsertAtTail(int x){
Node *newNode = GetnewNode(x);
Node *temp =head;
if(head == NULL){
    head=newNode;
    return;
}
// Traversing till last Node
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newNode;
newNode->prev=temp;
}

void Print(){
    Node *temp = head;
printf("List is\n");
while(temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}

void ReversePrint(){
Node *temp = head;
while(temp->next!=NULL){
    temp=temp->next;
}
printf("Reverse print:\n");
while(temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->prev;
}
printf("\n");
}

int main(){
head = NULL;
InsertAtTail(1); // 1
Print();
InsertAtHead(2); // 2,1
Print();
InsertAtHead(3); // 3,2,1
Print();
InsertAtHead(4); // 4,3,2,1
Print();
ReversePrint(); // 1,2,3,4
InsertAtTail(5); // 4,3,2,1,5
Print();
}

