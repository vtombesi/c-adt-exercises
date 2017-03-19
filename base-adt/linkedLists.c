//
//  linkedLists.c
//  LinkedListImplementation
//
//  Created by GraverValentine on 15/03/17.
//  Copyright © 2017 GraverValentine. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "linkedLists.h"

/* Init the linked list */
void LLInit(t_node **head) {
    *head = NULL;
}

/* Prints the content of the LL */
void LLPrint(t_node **head) {
    t_node *p = *head;
    
    while (p != NULL)
    {
        printf("%d \t", p->value);
        p = p->next;
    }
    printf("\n");
}

/* Removes an element from linked list */
void LLRemoveFromHead(t_node **head) {
    t_node *p = *head;
    t_node *next = p->next;
    *head = next;
}

/* Removes an element from linked list */
void LLRemoveFromTail(t_node **head) {
    t_node *p = *head;
    t_node *next = p->next;
    *head = next;
}

/* Adds an element to the linked list at first position */
void LLAddFront(t_node **head, int val) {
    t_node *start = *head;
    t_node *node = malloc(sizeof(t_node));
    node->value = val;
    node->next = start;
    *head = node;
}

/* Adds an element to the linked list at last position */
void LLAddBack(t_node **head, int val) {
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
int LLSearch(t_node **head, int val) {
    t_node *p = *head;
    while (p != NULL) {
        if (p->value == val)
            return 1;
        p = p->next;
    }
    
    return 0;
}

/* Pushes an element in the linked list */
void LLPush() {
    
}

/* Pops the last element out of the linked list */
void LLPop() {
    
}

/* Iterates over the list */
void LLIterate() {
    
}
