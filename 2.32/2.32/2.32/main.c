#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int kg, cm;
	double bmi;
	
	printf("�п�J�ƭȡA�N�|�p��X�z��BMI��(�魫kg ����cm):");
	scanf("%d%d", &kg, &cm);

	bmi = (float)kg*10000 / cm/cm;
	printf("�z��BMI�Ȭ�:%.2f",bmi);
	printf("\n�Ѧҭ�:\nBMI VALUES\nUnderweight: less then 18.5\nNormal:      between 18.5 and 24.9\nOverweight:  between 25 and 29.9\nObese:       30 or greater\n");

	system("pause");

	return 0;
}