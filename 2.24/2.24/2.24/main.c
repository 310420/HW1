#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0 , sum = 0;

	
	printf("块ヴ種俱计:");
	scanf("%d", &num);

	sum = num % 2;
	

	if (sum == 1)
	{
		printf("\n计\n");
	}
	else
	{
		printf("\n案计\n");
	}

	system("pause");

	return 0;


}