//mergersort
#include <stdio.h>
#include <stdlib.h>
void merger(int a[], int l, int m, int r);
void mergersort(int a[], int l, int r);
void input(int a[], int n);
int main()
{
	int n;
	scanf("%d", &n);
	int *arr = calloc(n,sizeof(int));
	input(arr,n);
	mergersort(arr,0,n-1);
	int i;
	for(i =0; i < n; i ++)
	{
		printf("%d \n", arr[i]);
	}


}
void input(int a[], int n)
{
	int i;
	for(i =0; i <n; i++)
	{
		scanf("%d", &a[i]);
	}
}
void merger(int a[], int l, int m, int r)
{
	int i,j,k;
	int t1 = m - l + 1;
	int t2 = r -m;
	int L[t1], R[t2];
	for( i =0; i < t1; i++)
	{
		L[i] = a[l+i];
	}
	for (j =0; j < t2 ;++j)
	{
		R[j] = a[m+1+j];
	}
	i =0; j= 0; k =l;
	while(i < t1 && j < t2)
	{
		if(L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while( j < t2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
	while(i < t1)
	{
		a[k] = L[i];
			i++;
		k++;

	}
}
void mergersort(int a[], int l, int r)
{
	if(l < r)
	{
		int m = (l+(r-1))/2;
		mergersort(a,l,m);
		mergersort(a,m+1,r);
		merger(a,l,m,r);
	}
}