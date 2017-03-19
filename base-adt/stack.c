//
//  stack.c
//  StackImplementation
//
//  Created by GraverValentine on 15/03/17.
//  Copyright © 2017 GraverValentine. All rights reserved.
//

#include "stack.h"

/*  Function to add an element to the stack */
void push (t_stack *s, int v) {
    
    if (s->top == (MAXSIZE - 1)) {
        printf ("Stack is Full\n");
        return;
    } else {
        s->stk[s->top] = v;
        s->top = s->top + 1;
    }
    
}

/*  Function to delete an element from the stack */
int pop (t_stack *s) {
    int num;
    if (s->top == - 1) {
        printf ("Stack is Empty\n");
        return (s->top);
    } else {
        num = s->stk[s->top];
        s->top = s->top - 1;
    }
    return(num);
}

/*  Function to display the status of the stack */
void display (t_stack *s) {
    int i;
    if (s->top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s->top - 1; i >= 0; i--)
        {
            printf ("%d\n", s->stk[i]);
        }
    }
    printf ("\n");
}
