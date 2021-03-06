// This program allows you to insert linked list anywhere
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
void Print(Node *p){
    if(p==NULL){
        printf("\n");
        return;
    }
    printf("%d\t",p->data);
    Print(p->link);
}

void ReversePrint(Node *p){
    if(p==NULL){
        printf("\n");
        return;
    }
    ReversePrint(p->link);
    printf("%d\t",p->data);
}

int main(){

head = NULL;
Insert(2,1); // 2
Print(head);
Insert(3,2); // 2,3
Print(head);
Insert(4,1); // 4,2,3
Print(head);
Insert(5,2); // 4,5,2,3
Print(head);
ReversePrint(head); // 3,2,5,4
Delete(1); // 5,2,3
Print(head);
Delete(3); // 5 2
Print(head);
ReversePrint(head);

}
