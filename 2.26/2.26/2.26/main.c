#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int fnum, lnum,sum;

	printf("輸入任意兩整數:");
	scanf("%d%d", &fnum, &lnum);

	sum = fnum%lnum;

	if (sum == 0)
	{
		printf("%d是%d的倍數\n",fnum,lnum);
	}
	else
	{
		printf("%d不是%d的倍數\n", fnum, lnum);
	}

	system("pause");

	return 0;
}