//
//  linkedLists.h
//  LinkedListImplementation
//
//  Created by GraverValentine on 14/03/17.
//  Copyright © 2017 GraverValentine. All rights reserved.
//

#ifndef linkedLists_h
#define linkedLists_h

typedef struct node {
    int value;
    struct node *next;
} t_node;

/* Init the linked list */
void LLInit(t_node **head);

/* Prints the content of the LL */
void LLPrint(t_node **head);

/* Adds an element to the linked list at first position */
void LLAddFront(t_node **head, int val);

/* Adds an element to the linked list at last position */
void LLAddBack(t_node **head, int val);

/* Searches an element in the linked list */
int LLSearch(t_node **head, int val);

/* Pushes an element in the linked list */
void LLPush();

/* Pops the last element out of the linked list */
void LLPop();

/* Removes an element from linked list by index */
void LLRemoveFromHead(t_node **head);

/* Removes an element from linked list by index */
void LLRemoveFromTail(t_node **head);

/* Iterates over the list */
void LLIterate();

#endif /* linkedLists_h */
