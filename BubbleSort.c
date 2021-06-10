#include <stdio.h>

int main ()
{

	int i,j,temp;
	char a[7] = {2,7,6,4,9,21,14};
	int N = sizeof(a);
	char Flag;

	for (i = 0; i < N-1; i++)
	{
		Flag = 0;
		for (j = 0; j < N-1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j]; 
				a[j] = a[j+1];
				a[j+1] = temp;
				Flag = 1;
			}
		}
		if(Flag == 0)
		{
			break;
		}
	}

	printf("Sorted Array is :\n");
	for (int k = 0; k < N; k++)
	{
		printf("%u\n",a[k]);
	}
	

	return 0;
}