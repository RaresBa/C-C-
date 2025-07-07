#include <stdio.h>
#include <stdlib.h>



struct Node
{
    char data;
    struct Node * next;
    struct Node * prev;
}

struct Node* head=NULL;


void add(char ch)
{
    struct Node * newNode= (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data=ch;
    newNode->next=head;
    newNode->prev=NULL;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    head=newNode;
}
 


void remove(char ch)
{
    struct Node*current=head;
    while(current!=NULL)
    {
        if(current->data==ch) 
        {
            if(current->prev!=NULL) 
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
            
            free(current);
        }
        current=current->next;
    }
}


void print()
{
    struct Node*current=head;
    while(current!=NULL)
    {
        printf("%c",current->data);
        current=current->next;
    }
    printf("\n");
}

void printback()
{
    struct Node*current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    while(current!=NULL)
    {
        printf("%c",current->data)
        current = current->prev;
    }
    printf("\n");
}

void empty()
{
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
}


int main()
{
    int c;
    char ch;

    while(1)
    {
        scanf("%d",c);
        switch(c)
        {
            case 1:
            {
                scanf("%c",&ch);
                add(ch);
                break;
            }
            case 2:
            {
                scanf("%c",&ch);
                remove(ch);
                break;
            }
            case 3:
            {
              print();
              break;
            }
            case 4:
            {
               printback();
               break;
            }
            case 5:
            {
               empty();
               break;
            }
        }
    }
    return 0;
}