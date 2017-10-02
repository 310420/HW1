#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,d;
	

	printf("輸入任意三個整數(中間用空格相隔):");
	scanf("%d%d%d", &a, &b, &c);

	if (a>b)
	{
		d = a;
		a = b;
		b = d;
	}
	if (b>c)
	{
		d = b;
		b = c;
		c = d;
	}
	if (a>c)
	{
		d = a;
		a = c;
		c = d;
	}
	if (a>b)
	{
		d = a;
		a = b;
		b = d;
	}
	printf("\n由小到大的順序為:\n%d  %d  %d  ", a, b, c);


	system("pause");

	return 0;
}