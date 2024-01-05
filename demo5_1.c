#include <stdio.h>
void tinhtong1();
int main()
{
	tinhtong1();
}
//------------------------------------
void tinhtong1()
{
	int a,b,tong;
	printf("Nhap so a: "); scanf("%d",&a);
	printf("Nhap so b: "); scanf("%d",&b);
	
	tong=a+b;
	
	printf("Tong 2 so %d + %d = %d",a,b,tong);
}
