
/*
CH-230-A
a7 p7.c
Baiasu Rares
sbaiasu@jacobs-university.de
*/





#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    struct stack s;
    s.count=0;

    char command;
    int num;

    while(1)
     {
        scanf(" %c", &command);
        if (command=='q')
        {
            printf("Quit\n");
            break;
        } else if (command=='s') 
        {
            scanf("%d", &num);
            push(&s, num);
        } else if (command=='p') 
        {
            int popped=pop(&s);
            if (popped!=-1)
         {
                
        }
        } else if(command=='e') {
            empty(&s);
        }
    }

    return 0;
}
