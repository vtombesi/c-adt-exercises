//
//  doublyLinkedLists.h
//  DoublyLinkedListsImplementation
//
//  Created by GraverValentine on 15/03/17.
//  Copyright © 2017 GraverValentine. All rights reserved.
//

#ifndef doublyLinkedLists_h
#define doublyLinkedLists_h

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *prev;
    struct node *next;
} t_node;

/* Init the linked list */
void DLLInit(t_node **head);

/* Prints the content of the DLL */
void DLLPrint(t_node **head);

/* Adds an element to the linked list at first position */
void DLLAddFront(t_node **head, int val);

/* Adds an element to the linked list at last position */
void DLLAddBack(t_node **head, int val);

/* Searches an element in the linked list */
int DLLSearch(t_node **head, int val);

/* Pushes an element in the linked list */
void DLLPush();

/* Pops the last element out of the linked list */
void DLLPop();

/* Removes an element from linked list */
void DLLRemove();

/* Iterates over the list */
void DLLIterate();

#endif /* doublyLinkedLists_h */
