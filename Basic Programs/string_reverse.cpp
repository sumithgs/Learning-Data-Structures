// reversing a string using stack
#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

void Reverse(char *c,int n){
stack<char> s;
// Loop for push
for(int i=0;i<n;i++){
    s.push(c[i]);
}
// Loop for pop
for(int i=0;i<n;i++){
    c[i]=s.top(); // reverse insertion
    s.pop();
}
}

int main(){
    char c[57];
    printf("enter a string\n");
    gets(c);
    Reverse(c,strlen(c));
    printf("output = %s",c);
}


