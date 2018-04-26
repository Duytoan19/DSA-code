// radix sort
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void RADIXSORT(int a[], int n);
void countsort(int a[], int n, int exp);
int getMax(int a[], int n);
void input(int a[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	int *a = calloc(n, sizeof(int));
	input(a,n);
	RADIXSORT(a,n);
	int i;
	for(i =0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
void input(int a[], int n)
{
	int i;
	for(i =0; i < n; i ++)
	{
		scanf("%d", &a[i]);
	}
}
int getMax(int a[], int n)
{
	int max = a[0];
	int i;
	for(i =1; i <n; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}
void countsort(int a[], int n, int exp)
{
	int output[n];
	int i, count[10] = {0};
	for(i =0; i <n; i++)
		count[(a[i]/exp)%10]++;
	for (i = 1; i < 10; ++i)
	{
		count[i] += count[i - 1];
	}
	for (i = n - 1; i >= 0; i --)
	{
		output[count[(a[i]/exp)%10]-1] = a[i];
		count[(a[i]/exp)%10]--;
	}
	for(i =0; i < n ; i++)
			a[i] = output[i];
}
void RADIXSORT(int a[], int n)
{
	int m = getMax(a, n);
	int exp;
	for(exp = 1; m/exp > 0; exp *= 10)
	{
		countsort(a,n,exp);
	}
}