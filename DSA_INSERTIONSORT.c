#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n; 
	//printf("enter num array \n");
	scanf("%d", &n);
	int i, j,t;
	int *arr = calloc(n,sizeof(int));
	for (i = 1; i <= n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	int temp, k;
	for (i = 1; i <= n ; i++)
    {
            j = i - 1;
            temp = arr[i];
            while(j > 0 && temp < arr[j])
            {
            	arr[j+1]=arr[j];
            	j--;
				arr[j+1]=temp;
			}
         
    }
    for( i = 1; i <= n; i++)
	{
		printf("%d", arr[i]);
		printf(" ");
	}
}