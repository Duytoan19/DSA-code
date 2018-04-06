#include <stdio.h>
#define MAX 20
int n, k,dd[MAX];
void KQ()
{
	int i;
	for(i = 1; i <= k; i++)
	{
		printf(" %d", dd[i]);
	}
	printf("\n");
 } 
 void tohop(int i)
 {
 	int j;
 	for(j = dd[i-1]+1; j <= n-k+i;j++)
 	{
 		dd[i]=j;
 		if(i == k)
 		KQ();
 		else
 		tohop(i+1);
	 }
 }
int main()
{
	
	scanf("%d", &n);
	scanf("%d", &k);
	int i;
	for (i = 1; i <= k; i ++)
		dd[i]=0;
	tohop(1);
	
}
