//
//  doublyLinkedLists.c
//  DoublyLinkedListsImplementation
//
//  Created by GraverValentine on 15/03/17.
//  Copyright © 2017 GraverValentine. All rights reserved.
//

#include "doublyLinkedLists.h"

/* Init the linked list */
void DLLInit(t_node **head) {
    *head = NULL;
}

/* Prints the content of the LL */
void DLLPrint(t_node **head) {
    t_node *p = *head;
    
    while (p != NULL)
    {
        printf("%d \t", p->value);
        p = p->next;
    }
    printf("\n");
}

/* Adds an element to the linked list at first position */
void DLLAddFront(t_node **head, int val) {
    t_node *start = *head;
    t_node *node = malloc(sizeof(t_node));
    node->value = val;
    node->next = start;
    *head = node;
}

/* Adds an element to the linked list at last position */
void DLLAddBack(t_node **head, int val) {
    t_node *p = *head;
    
    t_node *node = malloc(sizeof(t_node));
    node->value = val;
    node->next = NULL;
    
    if (p == NULL) {
        *head = node;
    } else {
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = node;
    }
}

/* Searches an element in the linked list */
int DLLSearch(t_node **head, int val) {
    t_node *p = *head;
    while (p != NULL) {
        if (p->value == val)
            return 1;
        p = p->next;
    }
    
    return 0;
}

/* Pushes an element in the linked list */
void DLLPush() {
    
}

/* Pops the last element out of the linked list */
void DLLPop() {
    
}

/* Removes an element from linked list */
void DLLRemove() {
    
}

/* Iterates over the list */
void DLLIterate() {
    
}
