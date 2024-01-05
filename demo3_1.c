#include<stdio.h>
int main ()
{
	float a,b,x;
	printf("Nhap so a:");
	scanf("%f",&a);
	printf("Nhap so b:");
	scanf("%f",&b);
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo dinh");
		}else if(b!=0){
			printf("Phuong trinh vo nghiem");
			}
			}else{
				x= -b/a;
			printf("Phuong trinh co nghiem x= f%",x);
			}

}
