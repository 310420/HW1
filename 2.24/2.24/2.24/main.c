#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 0 , sum = 0;

	
	printf("��J���N���:");
	scanf("%d", &num);

	sum = num % 2;
	

	if (sum == 1)
	{
		printf("\n�����_��\n");
	}
	else
	{
		printf("\n��������\n");
	}

	system("pause");

	return 0;


}