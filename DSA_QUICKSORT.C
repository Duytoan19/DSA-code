#include <stdio.h>
#include <stdlib.h>
void quicksort(int data[], int l, int r);
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for( i=0; i <n; i++)
	{
		scanf("%d", &arr[i]);
	}
	quicksort(arr, 0,n-1);
	for(i =0; i <n;i++)
	{
		printf("%d\n", arr[i]);
	}
 	return 0;
}

/*void swap(int , int arr[i], int arr[j])
{
	int temp;
	temp = arr[i];
	arr[i] = arr [j];
	arr[j] = temp;
}*/
void quicksort(int data[], int l, int r)
{
		int key = data[l];
		int i = l;
		int j=r;
		while(i <= j)
		{
			while(data[i] < key)
				i++;
			while(data[j]>key)
				j--;
			if (i <= j)
			{
				/* code */
			int temp;
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			}
			i++;
			j--;
		}
		if (l<j)
		{
			/* code */
			quicksort(data,l,j);
		}
		if(r >i)
		{
			quicksort(data,i,r);
		}

}