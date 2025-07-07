/*
CH-230-A
a3 p4.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/



#include <stdio.h>
int position(char str[], char c)
{
int idx;
/* Loop until end of string */
for (idx = 0;str[idx] !='\0'; ++idx)
{
    if(str[idx]==c)
    {
        return idx;
        // we return the pos of 'g' when found
    }
}
return idx;
}
int main()
 {
char line[80];
while (1) {
printf("Enter string:\n");
fgets(line, sizeof(line), stdin);// we appeal the function
printf("The first occurrence of ’g’ is: %d\n", position(line,'g'));

}
return 0;
}
