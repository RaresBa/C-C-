/*
   CH-230-A
   a8_p3.c
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/


#include <stdio.h>
#include "queue.h"

int main(void)
{
    Queue line;
    Item temp;
    char ch;
    initialize_queue(&line);
    //Calling the function to initialize the line
    printf("Type a to add, d to delete, p to print, q to quit:\n");
    while ((ch=getchar())!= 'q')
    {
        if(ch!= 'p') 
        {
            while (getchar()!='\n')  
            //I clear the input buffer
                continue;
        }
        switch(ch)
        {
            case 'p':
                printq(&line);
                break;
        }
        printf("%d items in queue\n", queue_item_count(&line));
        printf("Type a to add, d to delete, p to print, q to quit:\n");
    }
    empty_queue(&line);
    puts("Bye.");
    return 0;
}
