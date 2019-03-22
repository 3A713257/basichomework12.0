#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i=0,j,m,num;
	printf ("Please enter a number:");
	scanf ("%d",&num);
	for (m=num; m>=1; m--)
	{
		for (i=1; i<=num-m; i++)
		{
			printf ("  ");
		}
		for (j=m; j>=1; j--)
		{
			printf (" *");
		}
		printf ("\n");
	}
	
	system ("pause");
	return 0;
}
