#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
/*
CH-230-A
a7 p1.c
Stefan Rares Baiasu
sbaiasu@jacobs-university.de
*/



struct Node* head = NULL;

void addNode(int v)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = v;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node* current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}//adding a node

void insertNode(int v)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = v;
    newNode->next = head;
    head = newNode;
}//inserting a node

void removeNode()
{
    if (head == NULL)
    {
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
}//removing a node

void printList()
{
    struct Node* current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}//printing the list and freing the memmmory

void freeList()
{
    while (head != NULL)
    {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
	//freeing the list and memmory
}
//these are the functions from where use_linked_list calls the functions