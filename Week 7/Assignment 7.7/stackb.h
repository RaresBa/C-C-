/*
CH-230-A
a7 p7.c
Baiasu Rares
sbaiasu@jacobs-university.de
*/





#ifndef STACK_H
#define STACK_H

struct stack 
{
    unsigned int count;
    int array[12]; 
};
//the array of 12 elemen ts

void push(struct stack *s, int num);//the push
int pop(struct stack*s);//the pop
void empty(struct stack*s);// the empty
int isEmpty(struct stack*s);// the check for empty

#endif
