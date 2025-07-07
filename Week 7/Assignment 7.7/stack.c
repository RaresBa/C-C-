/*
CH-230-A
a7 p7.c
Baiasu Rares
sbaiasu@jacobs-university.de
*/




#include "stack.h"
#include <stdio.h>


//the push function
void push(struct stack *s, int num)
{
    if (s->count<12)
    {
        s->array[s->count]=num;
        s->count++;
        printf("Pushing %d\n",num);
    } else
    {
        printf("Stack Overflow\n");
    }
}


//the pop function
int pop(struct stack *s) 
{
    if(s->count > 0) 
    {
        int num=s->array[s->count -1];
        s->count--;
        printf("Popping %d\n",num);
        return num;
    } else 
    {
        printf("Stack Underflow\n");
        return -1; 
    }
}


//the empty function
void empty(struct stack *s)
 {
    while(s->count>0)
    {
        pop(s);
    }
    printf("Emptying Stack");
}


//the check for the empty string
int isEmpty(struct stack *s)
{
    return s->count==0;
}
