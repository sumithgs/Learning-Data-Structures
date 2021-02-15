// Array implementation of stack
#include<stdio.h>
#define MAX_SIZE 101
int top = -1;
int a[MAX_SIZE];

void push(int x){
if(top == MAX_SIZE-1){
    printf("Stack overflow");
return;
}
a[++top]=x;
}

void pop(){
if(top==-1){
    printf("Stack is empty");
    return;
}
top--;
}
int Top(){
    return a[top];
}
int isEmpty(){
    if(top==-1)return 1;
    return 0;
}

void Print(){
    printf("stack is\n");
    for(int i=0;i<=top;i++){
        printf("%d\t",a[i]);
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