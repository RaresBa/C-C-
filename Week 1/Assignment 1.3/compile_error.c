
/*
CH-230-A
a1_p3.c
Baiasu Stefan Rares
sbaiasu@jacobs-university.de
*/
   #include <stdio.h> /* before you want to add a libary (stdio.h) you need to put "#" */

   int main()
    {
    double result; /* The result of the division */
    int a = 5;
    double b = 13.5; /* We need to use "double" to declare variable b because it has a decimal */
    result = a / b;
    printf("The result is: %lf\n", result); /* so we can make an accurate division we need to have "%lf" which is used for double(decimal notation) */
return 0;
}
