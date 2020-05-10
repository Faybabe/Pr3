#include "list.h"
#include <stdio.h>
#include <stdlib.h>

Node * Node_construct(int v) {
        Node * n = (Node*)malloc(sizeof(Node));
        n -> value = v;
        n -> next = NULL;
        return n;
}

Node * List_insert_last(Node * head, int v) {
        Node * p = Node_construct(v);
        Node * last;
        if(head == NULL) {
                head = p;
        } else {
                last = head;
                while (last -> next != NULL) {
                        last = last ->next;
                }
                last -> next = p;
        } return head;
}

Node * List_insert(Node * head, int v) {
        printf(" insert %d\n", v);
        Node * p = Node_construct(v);
        p -> next = head;
        return p;
}

Node * List_delete(Node * head, int v){
        printf("delete %d\n" , v);
        Node * p = head;
        if (p == NULL) {
                return p;
        }


        if((p -> value) == v) {
                p=p -> next;
                free(head);
                return p;
        }Node * q = p -> next;
        while (( q != NULL) && ((q -> value) !=v)) {

                p = p -> next;
                q = q -> next;
        }

        if ( q != NULL) {
                p -> next = q -> next;
                free(q);
        }
        return head;
}

void List_destroy(Node *head) {
        while (head != NULL) {
                Node *p = head -> next;
                free (head);
                head = p;
        }
}
void List_print(Node * head) {
        if(head == NULL) {
printf("No nodes to display\n");
        } else {
                printf("Print the whole list:\n");
                while( head != NULL){
                        printf("%d" , head ->value);
                        head = head -> next;
                }
        }
        printf("\n\n");
}



                                      
                                   
                                      
