/*
   CH-230-A
   a8_p3.c
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/



#ifndef QUEUE_H_
#define QUEUE_H_

#define MAXQUEUE 100

typedef int Item;

typedef struct node
{
    Item item;
    struct node *next;
} Node;
//The struct node for the items


typedef struct queue 
{
    Node *front;
    Node *rear;
    int items;
} Queue;

void initialize_queue(Queue *pq);
int queue_is_full(const Queue *pq);
int queue_is_empty(const Queue *pq);
int queue_item_count(const Queue *pq);
int enqueue(Item item, Queue *pq);
int dequeue(Item *pitem, Queue *pq);
void empty_queue(Queue *pq);
void printq(const Queue *pq);

#endif
