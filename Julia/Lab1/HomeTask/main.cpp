#include <stdio.h>

/* обозначает замену первого на второе*/ 

#define KMS_PER_MILE 1.609

int main(void)
{
	int kms;
	double miles;
	
	printf("Введите расстоние километрах> ");
	scanf("%d", &kms);
		
	miles = kms/KMS_PER_MILE;	

	printf("Оно равно %f миль\n", miles);

	return(0);
}

