#include<stdio.h>
int main (){
	int so;
	do{
	printf("\n");
	printf("------------------------------------------------\n");
	printf("             Assigment giai doan 1              \n");
	printf("------------------------------------------------\n");
	printf(" 1. Kiem tra so nguyen                          \n");
	printf(" 2. Tim uoc chung, boi chung                    \n");
	printf(" 3. Chuong trinh tinh tien gio karaoke          \n");
	printf(" 4. Tinh tien dien                              \n");
	printf(" 5. Chuc nang doi tien                          \n");
	printf(" 6. Vay lai suat ngan hang                      \n");
	printf(" 7. Vay mua xe                                  \n");
	printf(" 8. Sap xep thong tin sinh vien                 \n");
	printf(" 9. Game FPT-Lott                               \n");
	printf(" 10. Lam viec voi phan so                       \n");
	printf(" 0. Thoat                                       \n");
	printf("------------------------------------------------\n");
	printf(" Xin moi chon chuc nang:");
	scanf("%d",&so);
	switch(so){
		case 1:
			printf("Kiem tra so nguyen");
			break;
		case 2:
			printf("Tim uoc chung, boi chung");
			break;
		case 3:
			printf("Chuong trinh tinh tien gio karaoke");
			int Tien = 15000;//so tien moi h
			int giodau, giocuoi, tonggio;
			int tiengio;
			int km4,kmv;//khuyen mai tu gio thu 4 
			printf("Tinh tien KARAOKE\n");
			printf("Nhap gio dau:"); scanf("%d",&giodau);
			printf("Nhap gio cuoi:"); scanf("%d",&giocuoi);
			tonggio = giocuoi - giodau;
			printf("giocuoi %dh - giodau %dh = %dh \n", giocuoi,giodau,tonggio);
			printf("Tien gio: %d\n", (tonggio*Tien));
			if(giodau >= 14 && giodau <= 17)
				{	
					printf("Khuyen mai khung gio vang 10 phan tram \n");
						if(tonggio > 3){
							printf("Tien gio vuot qua 3h\n");
							km4 = (tonggio - 3) * 0.3 * Tien;
							tiengio = tonggio * Tien - km4; 
							printf("So gio vuot: %d => Tien KM: %d \n",(tonggio - 3),km4); 
				}				
						else{
							tiengio = tonggio * Tien;}
				
							kmv = tiengio * 0.1;//10%
							printf("Tien gio truoc KMV: %d\n", tiengio);
							printf("Tien KMV: %d\n",kmv);
							tiengio = tiengio - kmv;
				}
			else{
				if(tonggio > 3){
				printf("Tien gio vuot qua 3h\n");
				km4 = (tonggio - 3) * 0.3 * Tien;
				tiengio = tonggio * Tien - km4; 
				printf("So gio vuot: %d => Tien KM: %d \n",(tonggio - 3),km4); 
				}				
					else{
						tiengio = tonggio * Tien;}
				}
			printf("Tien phai tra: %d", tiengio);
			break;
		case 4:
			printf("Tinh tien dien");
			float kWh, tienDien;
 printf("Nhap vao so kWh cua ban (kWh): ");
 scanf("%f",&kWh);
 if(kWh<0){
 printf("\nVui long nhap lai So Dien\nSo dien khong duoc nho hon 0\n");
 }else if(kWh<=50){
  tienDien=kWh*1.678;
  printf("\nban da dung dien trong khoang 0 - 50 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=100){
  tienDien=50*1.678+(kWh-50)*1.734;
  printf("\nban da dung dien trong khoang 51 - 100 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=200){
  tienDien=50*1.678+(50*1.734)+(kWh-100)*2.014;
  printf("\nban da dung dien trong khoang 101 - 200 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=300){
  tienDien=50*1.678+50*1.734+100*2.014+(kWh-200)*2.536;
  printf("\nban da dung dien trong khoang 201 - 300 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=400){
  tienDien=50*1.678+50*1.734+100*2.014+100*2.536+(kWh-300)*2.834;
  printf("\nban da dung dien trong khoang 301 - 400 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh>400){
  tienDien=50*1.678+50*1.734+100*2.014+100*2.536+100*2.834+(kWh-400)*2.927;
  printf("\nban da dung dien tren 400 kWh so tien ban phai tra la: %.2f",tienDien);
 };
			break;
		case 5:
			printf("Chuc nang doi tien");
			break;
		case 6:
			printf("Vay lai suat ngan hang");
			break;
		case 7:
			printf("Vay mua xe");
			break;
		case 8:
			printf("Sap xep thong tin sinh vien");
float diem;
	printf("xin moi nhap diem :");
	scanf("%f",&diem);
	if(diem>=9){
		printf("hocluc :xuat xac");
		
	}else if(diem>=8){
		printf("hoc luc :Gioi");
		}else if(diem>=7){
		printf("hoc luc :Kha");
		
	}else if(diem>=5){
		printf("hoc luc :Trung binh");
	
	}else if(diem>=3,5){
		printf("hoc luc :Kem");
	}else 
		printf("hoc luc :Yeu");
			break;
		case 9:
			printf("Game FPT-Lott");
			break;
		case 10:
			printf("Lam viec voi phan so");
			break;
		case 0:
			printf("Thoat");
			break;


}}while(so!=0);
}
