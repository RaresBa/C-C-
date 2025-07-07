/*
   CH-230-A
   a7_p6.c
   Baiasu Stefan Rares
   sbaiasu@jacobs-university.de
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



//the struct for the program
struct person 
{
	int varsta;
    char nume[30];
};



//the function for compairing the names
int compare_name(const struct person x, const struct person y)
{
	if(strcmp(x.nume,y.nume)>0)
		return 1;
	else if(strcmp(x.nume,y.nume)==0)
	{
		if(x.varsta>y.varsta)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}



//the function for compairing the age
int compare_age(const struct person x, const struct person y)
{
	if(x.varsta>y.varsta)
		return 1;
	else if (x.varsta==y.varsta)
	{
		if(strcmp(x.nume,y.nume)>0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}



//the bubble sort function
void bubblesort(struct person *arr, int n, 
int (*func)(const struct person x, const struct person y))
{
	bool swapped=true;
	do
	{
		swapped=false;
		for(int i=1;i<=n-1;i++)
		{
			if(func(arr[i-1],arr[i])>0)
			{
				struct person aux;
				aux=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=aux;
				swapped=true;
			}
		}
	} while (swapped);
	
}




//the function for printing
void print_str(struct person *arr,int n)
{
	for(int i=0;i<n;i++)
    {
			printf("{%s, %d}; ",arr[i].nume,arr[i].varsta);
    }
	printf("\n");
}



int main ()
{	

	int n,i;
	struct person *arr;
	scanf("%d",&n);

	//i allocate the memorry 
	arr = (struct person*) malloc (sizeof(struct person)*n);

	//i read the elements of the struct array
	for(i=0;i<n;i++)
		{
		getchar();
        fgets(arr[i].nume, sizeof(arr[i].nume), stdin);
        arr[i].nume[strlen(arr[i].nume) - 1] = '\0';
        scanf("%d", &(arr[i].varsta));
		}

	bubblesort(arr,n,compare_name);//sorting according to name
	print_str(arr,n);
	bubblesort(arr,n,compare_age);//sorting according to age
	print_str(arr,n);
	free(arr);
	return 0;
}