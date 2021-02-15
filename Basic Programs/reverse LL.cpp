// This program allows you to insert linked list anywhere and reverse the linked list using iterative method
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    Node *link;
};
Node *head;
void Insert(int data,int n){
Node *temp1 = new Node;
// Assigning the node data and link
temp1->data=data;
temp1->link=NULL;
// To insert at begining condition
if(n==1){
    temp1->link=head;
    head=temp1;
    return;
}
Node *temp2=head;
// Traversal to the node where you want to insert
for(int i=0;i<n-2;i++){
    temp2=temp2->link;
}
temp1->link=temp2->link; // connecting the new node with the address present in temp2 
temp2->link=temp1; // connecting the new node left side with previous node
}
void Delete(int n){
    Node *temp=head;
    // To delete at the begining condition
    if(n==1){
        head =temp->link;
        delete temp;
        return;
    }
    // Traversing to the previous node which you want to delete
    for(int i;i<n-2;i++){
        temp=temp->link;
    }
    // Making the temp1 the node which you want to delete
    Node *temp1=temp->link;
    // connecting the node with previous and after node of the node which you want to delete
    temp->link=temp1->link;
    delete temp1;
}
void Print(){
Node *temp=head;
printf("List is ");
while(temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->link;    
}
printf("\n");
}
void Reverse(){
Node *next,*current,*prev;
current = head;
prev = NULL;
while(current!=NULL){
    next=current->link;
    current->link=prev;
    prev = current;
    current=next;
}
head=prev;
}
int main(){

head = NULL;
Insert(2,1); // 2
Print();
Insert(3,2); // 2,3
Print();
Insert(4,1); // 4,2,3
Print();
Insert(5,2); // 4,5,2,3
Print();
Reverse(); // 3,2,5,4
Print(); 

Delete(1); // 2,5,4
Print();
Delete(3); // 2,5
Print();
}
