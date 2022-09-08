//singly linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};
struct node *head=NULL, *temp;

void createList();
void insert();
void delete();
void display();

int main() {
  printf("OPERATIONS ON SINGLY LINKED LIST\n");
  while(1){
    int c;
    printf("1. CREATE\t2. INSERT\t3. DELETE\t4. DISPLAY\t5. EXIT\n");
    printf("enter your choice: ");
    scanf("%d", &c);
    switch(c){
      case 1: createList(); break;
      case 2: insert(); break;
      case 3: delete(); break;
      case 4: display(); break;
      case 5: exit(10);
      default: printf("wrong choice, please re-enter\n");
    }
  }
}

void createList(){
  if(head==NULL) {
    int n, i;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    if(n!=0) {
      int info;
      struct node* newnode;
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("enter number to be inserted: ");
      scanf("%d", &info);
      newnode->data=info;
      head=newnode;
      temp=head;
      for(i=2; i<=n; i++) {
        newnode=(struct node *)malloc(sizeof(struct node));
        temp->next=newnode;
        printf("enter number to be inserted: ");
        scanf("%d", &info);
        newnode->data=info;
        temp=temp->next;
      }
    }
    printf("the list has been created!\n");
  }
  else
    printf("the list is already created!\n");
}

void insert_end(int);
void insert_front(int);
void insert_pos(int);
void insert(){
  int c, n;
  printf("enter element to be inserted: ");
  scanf("%d", &n);
  printf("where to insert?\n");
  printf("1. Front\t2. End\t3. Any position\n");
  printf("enter your choice: ");
  scanf("%d", &c);
  switch(c) {
    case 1: insert_front(n); break;
    case 2: insert_end(n); break;
    case 3: insert_pos(n); break;
  }
}
void insert_front(int info){
  struct node* newnode;
  newnode=malloc(sizeof(struct node));
  newnode->data=info;
  newnode->next=head;
  head=newnode;
}
void insert_end(int info){
  struct node* newnode;
  newnode=malloc(sizeof(struct node));
  newnode->next=0;
  newnode->data=info;
  while(head->next!=NULL){
    head=head->next;
  }
  head->next=newnode;
}
void insert_pos(int info){
  struct node *newnode;
  newnode=malloc(sizeof(struct node));
  int pos, i;
  printf("enter position of insertion: ");
  scanf("%d", &pos);

  temp=head;
  newnode->data=info;
  newnode->next=0;
  while(i<pos-1){
    temp=temp->next;
    i++;
  }
  newnode->next=temp->next;
  temp->next=newnode;
}

void delete_front();
void delete_end();
void delete_pos();
void delete(){
  int c;
  printf("where to delete?\n");
  printf("1. Front\t2. End\t3. Any position\n");
  printf("enter your choice: ");
  scanf("%d", &c);
  if(head==NULL){
    printf("list is empty!\n");
    return;
  }
  switch(c) {
    case 1: delete_front(); break;
    case 2: delete_end(); break;
    case 3: delete_pos(); break;
  }
}
void delete_front(){
  temp=head;
  head=head->next;
  free(temp);
}
void delete_end(){
  struct node *prevnode;
  temp=head;
  while(temp->next!=0){
    prevnode=temp;
    temp=temp->next;
  }
  free(temp);
  prevnode->next=0;
}
void delete_pos(){
  struct node *position;
  int i=1, pos;
  printf("enter position to delete: ");
  scanf("%d", &pos);
  position=malloc(sizeof(struct node));
  temp=head;
  while(i<pos-1){
    temp=temp->next;
    i++;
  }
  position=temp->next;
  temp->next=position->next;
  free(position);
}

void display() {
  temp=head;
  while(temp!=NULL){
    printf("%d->", temp->data);
    temp=temp->next;
  }
  printf("NULL\n");
}