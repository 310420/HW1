#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c,d;
	

	printf("��J���N�T�Ӿ��(�����ΪŮ�۹j):");
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
	printf("\n�Ѥp��j�����Ǭ�:\n%d  %d  %d  ", a, b, c);


	system("pause");

	return 0;
}