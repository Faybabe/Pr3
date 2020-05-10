/*
  file: main.c
*/
#include "list.h"
#include <stdio.h>
#include "list.c"
int input() { 
	int number;
       	printf("Menu\n\n");
       	printf("1. Insert head\t2. Insert tail\t3. Delete a node\n");
       	printf("4. Delete all\t5. Display\t6. Exit\n");
       	printf("Your choice here: ");
       	scanf("%d", &number);
       	return number;
}
int main(int argc, char * argv[]) {
	       	int choice = input();
	       	Node *head = NULL;
	       	int a, b;
	       	do { switch (choice){
		       	case 1: printf("Enter a number to add to the node: ");
			       	scanf("%d", &a); 
				head = List_insert(head, a);
			       	break;

		       	case 2: printf("Enter a number to add to the node: ");
			       	scanf("%d", &a); 
				head = List_insert_last(head, a);
			       	break;

		       	case 3: printf("Enter a number to delete: ");
			       	scanf("%d", &a);
			       	head = List_delete(head, a);
			       	break;

			case 4: List_destroy(head);
			       	head = NULL;
			       	break;

			case 5: List_print(head);
			       	break;

		       	case 6: break;

		       	default: printf("Wrong choice!"); 
				 break; 
		} choice = input();
	       	} while (choice != 6);
       	}

