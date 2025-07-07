/*
CH-230-A
a6 p8.c
Stefan Rares Baiasu
sbaiasu@jacobs-university.de
*/
 
 
 
 
#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node*next;
};
 
struct Node*head=NULL;
 
void addNode(int v)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=v;
    newNode->next=NULL;
 
    if (head==NULL)
    {
        head=newNode;
    } else
    {
        struct Node* current=head;
        while (current->next!=NULL)
         {
            current=current->next;
        }
        current->next=newNode;
    }
}
//adding a node
void insertNode(int v)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=v;
    newNode->next=head;
    head=newNode;
}
//insersting a node
void removeNode()
 {
    if (head==NULL)
    {
        return;
    }
    struct Node*temp=head;
    head=head->next;
    free(temp);
}
//removing the node
void printList()
 {
    struct Node*current=head;
    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
    printf("\n");
}
//printing the lists
void freeList()
{
    while (head != NULL)
    {
        struct Node* temp=head;
        head=head->next;
        free(temp);
    }
}
//freeing the list and memorry
int main() {
    char w;
    int x;
 
    while (1)
    {
        scanf(" %c", &w);
        switch(w)
        {
            case 'a':
                scanf("%d", &x);
                addNode(x);
                break;
            case 'b':
                scanf("%d", &x);
                insertNode(x);
                break;
            case 'r':
                removeNode();
                break;
            case 'p':
                printList();
                break;
            case 'q':
                freeList();
                return 0;
        }
    }
    //I use switch to get trough all the cases
    return 0;
}