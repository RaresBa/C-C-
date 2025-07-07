/*
   CH-230-A
   a8_p4.c
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#include "stack.h"
void push(struct stack *a,int value)
{
	if(a->count==12)
		printf("Pushing Stack Overflow\n");
	else
	{
	a->count++;
	a->array[a->count-1]=value;
	}
}
void pop(struct stack *a)
{
	if(isEmpty(a)==1)
		printf("Popping Stack Underflow\n");
	else 
	{
	printf("Popping %d\n",a->array[a->count-1]);
	a->array[a->count-1]=0;
	a->count--;
	}
}
void empty(struct stack *a)
{
	if(isEmpty(a)==1)
		printf("Emptying Stack Underflow\n");
	else
	{
		printf("Emptying Stack ");
		while(a->count>=1)
		{
			printf("%d ",a->array[a->count-1]);
			a->array[a->count-1]=0;
			a->count--;
		}
		printf("\n");
	}
}

void print_stack (struct  stack *a)
{
	while(a->count>0)
		{
			printf("%d",a->array[a->count-1]);
			a->count--;
		}
}