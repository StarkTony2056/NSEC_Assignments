//operations on stack
#include<stdio.h>
#include<stdlib.h>

int size=20, top=-1;
int a[20];
void push(int);
void pop();
void display();

int main() {
  int c, i=0, n;
  while(i<1) {  
    printf("Choose options from list:\n");
    printf("1. PUSH\t2. POP\t3. DISPLAY\t4. EXIT\n");
    printf("enter your choice: ");
    scanf("%d", &c);
    switch(c) {
      case 1:
      printf("enter element to be pushed: ");
      scanf("%d", &n);
      push(n);
      break;
      case 2:
      pop();
      break;
      case 3:
      display();
      break;
      case 4:
      exit(10);
      default:
      printf("wrong choice! please re-enter.\n");
    }
  }
}

void push(int n) {
  top=top+1;
  a[top]=n;
  return;
}

void pop() {
  printf("element to be popped: %d\n", a[top]);
  top=top-1;
}

void display() {
  int k;
  printf("stack contents are: ");
  for(k=0; k<=top; k++) {
    printf("%d\t", a[k]);
  }
  printf("\n");
}