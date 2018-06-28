#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void)
{
	int miles;
	double kms;
	/*Два указателся на область в памяти, пока только пустые*/
	FILE *inp,*outp;
	
	/*Записали в указатель, при помощи функции fopen,
	 где лежит файл, и указали на то, что будем из него читать*/
	inp = fopen("input.txt","r");
	/*Записали в указатель где лежит файл и указали на то,
	 что мы будем в него записывать*/
	outp = fopen("output.txt","w");

	fscanf(inp,"%d", &miles);
	fprintf(outp,"Оно равно в милях: %d. \n", miles);
	
	kms = KMS_PER_MILE*miles;

	fprintf(outp,"Оно равно %.2f км.\n",kms);

	fclose(inp);
	fclose(outp);

	return(0);
}
