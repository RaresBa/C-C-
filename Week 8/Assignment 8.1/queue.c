/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{

    //i check if the queue is full
	if(queue_is_full(pq))
    {
        return -1;
    }

    //i make a new node and allocate the memorry
    Node *newnode=NULL;
    if(newnode==NULL)
    {
        return -1;
    }
    newnode=(Node *)malloc(sizeof(Node));
    
    //i copy an item to the node
    newnode->item=item;

    //i send the next pointer to NULL
    newnode->next=NULL;

    if(pq->front==NULL)
    {
    pq->front=pq->rear=newnode;
    }//set the front node to NULL
    else
    {
        pq->rear=newnode;
    }
    pq->rear=newnode;
    pq->items++;
    //I increse the item count
        return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    //I declare an auxiliar node
    Node *temp;

    //I allocate memorry for the new node
    temp=(Node*)malloc(sizeof(Node));
if(temp==NULL)
{
    return -1;
}
    if(queue_is_empty(pq))
    {
        return -1;
    }
    //if the queue is empty we leave

    //I store the first node
    temp=pq->front;

    //reset the mememory
    *pitem=pq->front->item;

    //reset the pointer
    pq->front=pq->front->next;


    //if the last time is removed we resent front 
	if(pq->items==1)
    {
		pq->front=pq->rear=NULL;
    }
    free(temp);
        return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}