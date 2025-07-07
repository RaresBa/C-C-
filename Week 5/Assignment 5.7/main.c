

/*
CH-230-A
a5 p7.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[101],str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    int len1=strlen(str1),len2=strlen(str2);
    int totalLength = len1 + len2;
    //the lenght of the array
    char *result=(char *)malloc((totalLength + 1)*sizeof(char));
    strcpy(result, str1);
    strcat(result, str2);
    //we copy the result
    printf("Result of concatenation: %s\n", result);
    //we concatonate
    free(result);
    return 0;
}
