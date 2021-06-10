#include <stdio.h>

int main ()
{
	int i,j,k,temp;
	char a[9] = {2,1,8,9,3,16,23,34,13};
	int N = sizeof(a);

	for (i = 0; i < N-1; i++)
	{
		for (j = 0; j < N-1; j++)
		{
			if((a[j]%2==0) && (a[j+1]%2==0) && (a[j] > a[j+1]))
			{
				temp = a[j]; 
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else if((a[j]%2==0) && (a[j+1]%2!=0))
			{
				temp = a[j]; 
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else if((a[j]%2!=0) && (a[j+1]%2!=0) && (a[j] > a[j+1]))
			{
				temp = a[j]; 
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("Sorted Array is :\n");
	for (k = 0; k < N; k++)
	{
		printf("%u\n",a[k]);
	}
	return 0;
}