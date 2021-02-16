#include<stdio.h>

struct Node{
int data;
Node *next;
};

Node *top = NULL;

void push (int x){
Node *temp = new Node();
temp->data = x;
temp->next=top;
top=temp;
}

void pop(){
Node *temp;
if(top==NULL){
    printf("empty stack");
}
temp = top;
top=top->next;
delete temp;
}
void Print(){
Node *temp=top;
    printf("stack is\n");
while(temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->next;
}
    printf("\n");
}

int main(){
push(1);
push(2);
Print();
push(3);
push(4);
Print();
pop();
Print();
push(5);
Print();
}

