#include <stdio.h>

/* обозначает замену первого на второе*/ 

#define KMS_PER_MILE 1.609

int main(void)
{
	int miles;
	double kms;
	
	scanf("%d", &miles);
        printf("Растояние в милях %d\n",miles);
	kms = KMS_PER_MILE *miles;

	printf("Оно равно %.2f км. \n", kms);

	return(0);
}

