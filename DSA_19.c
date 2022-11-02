#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node *prev, *next;
};
struct node* head = NULL, *temp;

void display()
{
	if (head == NULL) {
		printf("\nList is empty\n");
		return;
	}
	temp = head;
	while (temp != NULL) {
		printf("Data = %d\n", temp->info);
		temp = temp->next;
	}
}

void insertAtFront()
{
	int data;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->prev = NULL;

	temp->next = head;
	head = temp;
}

void insertAtEnd()
{
	int data;
	struct node *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->next = NULL;
	trav = head;
	if (head == NULL) {

		head = temp;
	}
	else {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}

void insertAtPosition()
{
	int data, pos, i = 1;
	struct node *r;
	r = (struct node*)malloc(sizeof(struct node));
	r->next = NULL;
	r->prev = NULL;
	printf("\nEnter position : ");
	scanf("%d", &pos);
	if (head == NULL) {
		head = r;
		r->prev = NULL;
		r->next = NULL;
	}
	else if (pos == 1) {
	insertAtFront();
	}
	else {
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	r->info = data;
	temp = head;
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		r->next = temp->next;
		r->prev = temp;
		temp->next = r;
		temp->next->prev = r;
	}
}

void deleteFirst()
{
	if (head == NULL)
		printf("\nList is empty\n");
	else {
		temp = head;
		head = head->next;
		if (head != NULL)
			head->prev = NULL;
		free(temp);
	}
}

void deleteEnd()
{
	if (head == NULL)
		printf("\nList is empty\n");
	temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	if (head->next == NULL)
		head = NULL;
	else {
		temp->prev->next = NULL;
		free(temp);
	}
}

void deletePosition()
{
	int pos, i = 1;
	struct node *position;
	temp = head;
	if (head == NULL)
		printf("\nList is empty\n");
	else {
		printf("\nEnter position : ");
		scanf("%d", &pos);

		if (pos == 1) {
			deleteFirst();
			if (head != NULL) {
				head->prev = NULL;
			}
			free(position);
			return;
		}
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
		temp->next = position->next;
		free(position);
	}
}

int main()
{
	int choice;
	while (1) {

		printf("\n1 To display list\n");
		printf("2 For insertion at starting\n");
		printf("3 For insertion at end\n");
		printf("4 For insertion at any position\n");
		printf("5 For deletion of first element\n");
		printf("6 For deletion of last element\n");
		printf("7 For deletion of element at any position\n");
		printf("8 To exit\n");
		printf("Enter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			display();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePosition();
			break;
		case 8:
			exit(1);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
			continue;
		}
	}
	return 0;
}