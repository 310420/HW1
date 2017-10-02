#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int kg, cm;
	double bmi;
	
	printf("請輸入數值，將會計算出您的BMI值(體重kg 身高cm):");
	scanf("%d%d", &kg, &cm);

	bmi = (float)kg*10000 / cm/cm;
	printf("您的BMI值為:%.2f",bmi);
	printf("\n參考值:\nBMI VALUES\nUnderweight: less then 18.5\nNormal:      between 18.5 and 24.9\nOverweight:  between 25 and 29.9\nObese:       30 or greater\n");

	system("pause");

	return 0;
}