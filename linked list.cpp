#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    Node *link;
};
Node *head;
void Insert(int x){
Node *temp = new Node;
temp->data=x;
temp->link=head;
head=temp;
}
void Print(){
Node *temp = head;
printf("list is");
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->link;
}
printf("\n");
}
int main(){
    head=NULL;
    int n,x;
    printf("How many numbers do you want? ");
    scanf("%d",&n);

for(int i=0;i<n;i++){
    printf("enter the number:\n");
    scanf("%d",&x);
    Insert(x);
    Print();
}
}

