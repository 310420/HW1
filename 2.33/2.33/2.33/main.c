#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e;
	printf("請輸入每天行駛里程:");
	scanf("%d", &a);

	printf("請輸入每加侖汽油價格:");
	scanf("%d", &b);

	printf("請輸入每加侖汽油可行駛里程數:");
	scanf("%d", &c);

	printf("請輸入每天的停車費:");
	scanf("%d", &d);

	printf("請輸入每天的過路費:");
	scanf("%d", &e);

	printf("您的交通費為%d/n", a*b / c + d + e);

	system("pause");

	return 0;


}