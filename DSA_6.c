//infix to postfix

#include<stdio.h>
#include<stdlib.h>

int isOperator(char ch);
int precedence(char ch);
void push(char ch);
char pop();
void display();

int main() {
  char exp[30];
  printf("enter infix expression: ");
  scanf("%s", exp);
}