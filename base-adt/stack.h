//
//  stack.h
//  StackImplementation
//
//  Created by GraverValentine on 15/03/17.
//  Copyright © 2017 GraverValentine. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 5

typedef struct stack
{
    int stk[MAXSIZE];
    int top;
} t_stack;

void push(t_stack *s, int v);
int  pop(t_stack *s);
void display(t_stack *s);

#endif /* stack_h */
