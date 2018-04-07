	#include <stdio.h>
int main()
{
	int a,b, year = 0;
	do
	{
		printf("nhap vao tuoi cha :");
		scanf("%d", &a);
		printf("nhap vao tuoi con :");
		scanf("%d", &b);
		while(a != 2*b)
		{
			a++;
			b++;
			year++;	
		}
		printf("vay sau %d thi tuoi cha gap 2 lan tuoi con", year);
		}
	while(a < 2*b);
	return 0;
}