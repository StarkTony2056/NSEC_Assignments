//postfix evaluation

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int size=20, top=-1;
int a[20];
void push(int);
int pop();
void display();

int main() {
  char exp[20];
  printf("enter the postfix expression: ");
  scanf("%s", exp);
  for(int i=0; exp[i]!='\0'; i++) {
    if(exp[i]==' ')
      continue;
    if(isdigit(exp[i]))
      push(exp[i]-'0');
    else {
      int num1=pop();
      int num2=pop();
      int num3;
      switch(exp[i]) {
        case '+':
        num3=num1+num2;
        break;
        case '-':
        num3=num2-num1;
        break;
        case '*':
        num3=num1*num2;
        break;
        case '/':
        num3=num2/num1;
        break;
      }
      push(num3);
    }
  }
  printf("the final result of the expression is: ");
  display();
}

void push(int n) {
  top=top+1;
  a[top]=n;
  return;
}

int pop() {
  top=top-1;
  return a[top+1];
}

void display() {
  int k;
  for(k=0; k<=top; k++)
    printf("%d\t", a[k]);
  return;
}