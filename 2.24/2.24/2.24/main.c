#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0 , sum = 0;

	
	printf("輸入任意整數:");
	scanf("%d", &num);

	sum = num % 2;
	

	if (sum == 1)
	{
		printf("\n此為奇數\n");
	}
	else
	{
		printf("\n此為偶數\n");
	}

	system("pause");

	return 0;


}