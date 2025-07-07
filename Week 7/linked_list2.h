
/*
CH-230-A
a7 p1.c
Stefan Rares Baiasu
sbaiasu@jacobs-university.de
*/



#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node
{
    int data;
    struct Node* next;
};

void addNode(int v);
void insertNode(int v);
void removeNode();
void printList();
void freeList();

#endif
