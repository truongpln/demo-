//Chuong trinh thu 2
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
	int x;
	double y;
	float z;
	printf("Kieu du lieu\n");
	printf("Kich thuoc kieu int la: %d Byte\n", sizeof x);
	printf("So lon nhat : %d\n", INT_MAX);
	printf("So nho nhat : %d\n", INT_MIN);
	
	printf("-----------------------------------\n");
	printf("Kich thuoc kieu double la\t\t %d\n", sizeof y);
	printf("DBL_MAX	: %g\n", (double) DBL_MAX);
	printf("DBL_MIN	: %g\n", (double) DBL_MIN);
	
	printf("-----------------------------------\n");
	printf("\nKich thuoc kieu float la : %d\n", sizeof(float));
	printf("So lon nhat : %g\n", (float) FLT_MAX);
	printf("So nho nhat : %g\n", (float) FLT_MIN);
}
