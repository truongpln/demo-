#include <stdio.h>
int main()
{
	int i,menh_gia_can_tim,vi_tri=-1;
	int tien[]={10,20,50,100,200,500};
	printf("Nhap vao menh gia can tim: \n");
	scanf("%d",&menh_gia_can_tim);
	for(i=0;i<6;i++){
	if(tien[i]==menh_gia_can_tim){
		vi_tri=tien[i];
	}
}
if(vi_tri>=0){
	printf("Menh gia tai vi tri %d la: %d \n",menh_gia_can_tim);
}else{
	printf("Khong tim thay so \n");
}
printf("\n");
return 0;
}
