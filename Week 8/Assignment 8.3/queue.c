/*
   CH-230-A
   a8_p3.c
   Baiasu Stefan Rares
  sbaiasu@jacobs-university.de
*/



#include <stdio.h>
#include <stdlib.h>

#include "queue.h"



void printq(const Queue *pq)
{
    Node *current = pq->front;
    printf("content of the queue: ");
    //Printing the content of the que to front
    while (current != NULL) 
    {
        printf("%d ", current->item);
        current = current->next;
        //while I have content in the string I print it
    }
    printf("\n");
}
