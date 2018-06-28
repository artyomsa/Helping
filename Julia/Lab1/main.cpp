/* стандартная библиотека ввода вывода,
 при компиляции в код прогораммы добавляется 
 весь код содержащийся в библиотеке и преобразуется в команды 
 понятные процессору. standart input output*/

#include <stdio.h>

/* обозначает замену первого на второе*/ 

#define KMS_PER_MILE 1.609

int main(void)
{
	int miles;
	double kms;
	
	printf("Введите расстоние милях> ");
	scanf("%d", &miles);
		
	kms = KMS_PER_MILE *miles;

	printf("Оно равно %.2f км. \n", kms);

	return(0);
}
