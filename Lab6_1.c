#include <stdio.h>
int main()
{
	int i,j,temp,n,x,day[10];
	printf("Nhap so phan tu mang n=");
	scanf("%d",&n);
	
for (i=0;i<n;i++)
{
	printf("Nhap so thu %d: ",i+1);
	scanf("%d",&day[i]);
}
printf("Cac phan tu trong mang\n");
for (i=0;i<n;i++)
{
	printf("%d   ",day[i]);
}
int tong=0,dem=0;
for (i=0;i<n;i++)
	if(day[i]%3==0)
	{
		dem=dem+1;
		tong=tong+day[i];
	}
	printf("\nTrung binh cac so chia het cho 3: %2.f");
}
