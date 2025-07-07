/*
CH-230-A
a7 p2.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <stdlib.h>

//the structu for a doubly linked list
struct Node 
{
    char data;
    struct Node*next;
    struct Node*prev;
};

//the head
struct Node*head=NULL;

//function that add a character to the begging
void add(char ch)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=ch;
    newNode->next=head;
    newNode->prev=NULL;
    if (head!=NULL) 
    {
        head->prev=newNode;
    }
    head=newNode;
}

//function to remove a given character from the list
void removechar(char ch)
{
    int cnt=0;
    struct Node*current=head;

    while (current!=NULL)
    {
        if (current->data==ch)
         {
            cnt=1;
            if (current->prev != NULL) 
            {
                current->prev->next=current->next;
            } else 
            {
                head=current->next;
            }

            if (current->next!=NULL)
            {
                current->next->prev=current->prev;
            }

            struct Node*temp=current;
            current=current->next;
            free(temp);
        } else 
        {
            current=current->next;
        }
    }
    //if the character is not in the list then the message will be printed
    if (!cnt) 
    {
        printf("The element is not in the list!\n");
    }
}

//function that prints the list
void print() 
{
    struct Node*current=head;

    while (current!=NULL) 
    {
        printf("%c ",current->data);
        current=current->next;
    }
    printf("\n");
}

//function to print the elements backwords
void backwards()
{
    struct Node*current=head;

    while (current->next!=NULL)
    {
        current=current->next;
    }

    while (current!=NULL) 
    {
        printf("%c ",current->data);
        current=current->prev;
    }
    printf("\n");
}

//function to empty the list
void empty() 
{
    struct Node*current=head;
    while (current!=NULL)
    {
        struct Node*temp=current;
        current=current->next;
        free(temp);
    }
    head = NULL;
}

int main() 
{
    int co;
    char ch;
    while (1)
    {
        scanf("%d", &co);

        switch (co)
        {   
            //if 1 is presed then the function for adding is called
            case 1:
                scanf(" %c", &ch);
                add(ch);
                break;
            
            //if 2 is presed then the function for removing is called
            case 2:
                scanf(" %c", &ch);
                removechar(ch);
                break;
            
            //if 3 is presed then the function for printing the list is called 
            case 3:              
                print();
                break;

            //if 4 is presed then the function for backwards is called
            case 4:
                backwards();
                break;
            
            //if 5 is presed then the function for emptying is called
            case 5:
                empty();
                return 0;
        }
    }
    return 0;
}
