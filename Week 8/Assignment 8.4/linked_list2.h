/*
   CH-230-A
   a8_p4.c
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

//Declaring astruct 
struct stack 
{
	unsigned int count;
	int array[12];
    //Initialazing a 12 array
};

int isEmpty (struct stack *a);
void push(struct stack *a,int value);
void pop(struct stack *a);
void empty(struct stack *a);
void print_stack (struct  stack *a);