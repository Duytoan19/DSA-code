#include <stdio.h>
int main()
{
	int a;
	float b, duMoi = 0;
	printf("nhap vao so du hien tai :");
	scanf("%d", &a);
	printf("nhap ty le lai suat :");
	scanf("%f", &b);
	duMoi = a + (float)a*b;
	printf("so du moi la = %.2f", duMoi);
}