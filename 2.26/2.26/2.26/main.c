#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int fnum, lnum,sum;

	printf("��J���N����:");
	scanf("%d%d", &fnum, &lnum);

	sum = fnum%lnum;

	if (sum == 0)
	{
		printf("%d�O%d������\n",fnum,lnum);
	}
	else
	{
		printf("%d���O%d������\n", fnum, lnum);
	}

	system("pause");

	return 0;
}