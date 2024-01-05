#include <conio.h>
#include <stdio.h>
#include <math.h>
main ()
{
long t,bd,kt;
clrscr();
printf("Nhap thoi gian bat dau, ket thuc: ");
scanf("%ld%ld",bd,kt);
if(kt<=18)
{
t = (kt - bd) * 40000 ;
printf("So tien quy khach phai tra la: %ld",t);
}
else
{
if(bd<=18)
{
t = (kt - 18) * 60000 + (18 - bd) * 40000 ;
printf("So tien quy khach phai tra la: %ld",t);
}
else
{
t = (kt - bd) * 60000 ;
printf("So tien quy khach phai tra la: %ld",t);
}
getch();
}
