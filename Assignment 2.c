/* Chuong trinh menu 2 cap */ 

#include <conio.h> 
#include <stdio.h>
#include <stdlib.h>
void songuyen();
void uscbsc();
void karaoke();
void tiendien();
void doitien();
void laisuat();
void vaytienmuaxe();
void sinhvien();
void fpoly_lott();
void phanso();
void main(void)
{ 
int imenu;
do
{
 system("cls");
 printf("Giang vien: Do Quang Ngoc \n");
 printf("Lop: SA18307 \n");
 printf("Ho va Ten: Pham Le Nhat Truong_MSSV:PS31614 \n");
printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
 printf("\t%c                MAIN MENU ASSIGNMENT                %c\t\t\t\t\t\t\t\t\t\n",186,186); 
 printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185); 
 printf("\t%c  1. Kiem tra so nguyen                             %c\t\t\t\t\t\t\t\t\t\n",186,186); 
 printf("\t%c  2. Tim uoc so chung va boi so chung cua 2 so      %c\t\t\t\t\t\t\t\t\t\n",186,186); 
 printf("\t%c  3. Chuong trinh tinh tien cho quan karaoke        %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  4. Tinh tien dien                                 %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  5. Chuc nang doi tien                             %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  6. Tinh lai suat vay ngan hang vay tra gop        %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  7. Xay dung chuong trinh vay tien mua xe          %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  8. Sap xep thong tin sinh vien                    %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  9. Game fpoly-lott (2/15)                         %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  10. Chuong trinh tinh toan phan so                %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c  0. Thoat                                          %c\t\t\t\t\t\t\t\t\t\n",186,186);
 printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\t\t\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
 printf("\tMoi ban chon chuc nang: ");
 scanf("%d", &imenu); 
 switch(imenu) 
 { 
  	case 1:  //---------------------------------------------------
	{
	    songuyen();
		break;
	}
  	case 2: //---------------------------------------------------
  	{
	  	uscbsc();
	    break; 
	}
  	case 3: //---------------------------------------------------
   	{ 
		karaoke();
		break; 
	}
	case 4: { //---------------------------------------------------
	  	tiendien ();  
		break;
	}
	case 5: { //---------------------------------------------------
		doitien ();
		break;
	}
	case 6: { //---------------------------------------------------
		laisuat();
		break;
	}
	case 7: { //---------------------------------------------------
		vaytienmuaxe();
		break;
	}
	case 8: { //---------------------------------------------------
		sinhvien();
		break;
	}
	case 9: { //---------------------------------------------------
		fpoly_lott();
		break;
	}
	case 10: { //---------------------------------------------------
		phanso();
		break;
	}
	case 0:{
		printf("\t\nChuong trinh ket thuc\n");
		break;
	}
  	default:
		printf("%d khong hop le",imenu);
	}
getch();
}

while (imenu!=11);

}
void songuyen()
{
	float x; // la so nhap bat ky
printf("Xin moi nhap so:"); scanf("%f",&x);
// kiem tra x co phai la so nguyen ko
if(x==(int)x)
printf("So %.2f la so nguyen\n",x);
else printf("So %.2f khong phai la so nguyen\n",x);

//kiem tra x co phai la so nguyen to ko

if(x>1 && x == (int)x){
	int flag = 1,i;
	for(i = 2; i<=sqrt(x);i++)
	
	if((int)x%i == 0){
		flag = 0;
		break;
	}
	if(flag==1) printf("So %.2f la so nguyen to \n",x);
	else printf("So %.2f khong phai la so nguyen to \n",x);
	}
	else printf("So %.2f khong phai la so nguyen to \n",x);


// Kiem tra x co phai la so chinh phuong khong
if (x>1 && x==(int)x && sqrt(x)==(int)sqrt(x))
printf("So %.2f la so chinh phuong\n",x);
else printf("So %.2f khong phai la so chinh phuong",x);
}
//kiem tra so nguyen so nguyen to so chinh phuong
void uscbsc()
{
	int a,b,USCLN,BSCNN;
	NhapLai:

	printf("xin moi ban nhap a:");scanf("%d",&a);
	printf("xin moi ban nhap b:");scanf("%d",&b);
	if(a==0 && b==0){
		printf("du lieu nhap ko hop le ");
	
		goto NhapLai;
		}
// tim USCLN cua a,b
int so1 = a, so2 = b; // sau day a,b se thay doi ko nhu ban dau
if(a==0|| b==0) 
USCLN = a + b;
else 
while(a!=b){
	if(a>b) 
	a = a -b;
	else 
	b = b - a;
	}
	USCLN =a; // USCLN = b vi tri lúc nay a = b
	printf("USCLN cua %d và %d = %d\n",so1,so2,USCLN);
	BSCNN = so1*so2/USCLN;
	printf("BSCNN cua %d và %d = %d\n",so1,so2,BSCNN);
}
//tim uoc so chung va boi so chung cua 2 so
void karaoke()
{
	int Tien =150000;//tien moi h 
	int gioDau, gioCuoi, tongGio;
	int tienGio;
	int km4,kmv;//khuyen mai tu gio thu 4
	printf("Tinh tien karaoke \n");
	printf("Nhap gio dau: \n"); scanf("%d",&gioDau);
	printf("Nhap gio cuoi: \n"); scanf("%d",&gioCuoi);
	tongGio = gioCuoi - gioDau;
	if(tongGio > 3){
		printf("Tien gio vuot qua 3h\n");
		km4 = (tongGio - 3) * 0.3 * Tien;
		tienGio = tongGio * Tien - km4; 
		printf("So gio vuot: %d => Tien KM: %d \n",(tongGio - 3),km4);

	}else{
		tienGio = tongGio * Tien;
		kmv = tienGio * 0.1;//10%
		printf("Tien gio truoc KMV: %d\n", tienGio);
		printf("Tien KMV: %d\n",kmv);
		tienGio = tienGio - kmv;
    }
    printf("Tien phai tra: %d\n",tienGio);
 
	printf("Gio Cuoi %dh - gio Dau %dh = %dh \n",gioDau, gioCuoi, tongGio);
}
//---------------------------------------------------
void tiendien()
{
	float kWh, tienDien;
 printf("\nNhap vao so kWh cua ban (kWh): ");
 scanf("%f",&kWh);
 if(kWh<0){
 printf("\nVui long nhap lai So Dien\nSo dien khong duoc nho hon 0\n ");
 }else if(kWh<=50){
  tienDien=kWh*1.678;
  printf("\nBan da dung dien trong khoang 0 - 50 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=100){
  tienDien=50*1.678+(kWh-50)*1.734;
  printf("\nBan da dung dien trong khoang 51 - 100 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=200){
  tienDien=50*1.678+(50*1.734)+(kWh-100)*2.014;
  printf("\nBan da dung dien trong khoang 101 - 200 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=300){
  tienDien=50*1.678+50*1.734+100*2.014+(kWh-200)*2.536;
  printf("\nBan da dung dien trong khoang 201 - 300 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh<=400){
  tienDien=50*1.678+50*1.734+100*2.014+100*2.536+(kWh-300)*2.834;
  printf("\nBan da dung dien trong khoang 301 - 400 kWh so tien ban phai tra la: %.2f",tienDien);
 }else if(kWh>400){
  tienDien=50*1.678+50*1.734+100*2.014+100*2.536+100*2.834+(kWh-400)*2.927;
  printf("\nBan da dung dien tren 400 kWh so tien ban phai tra la: %.2f",tienDien);
 };
}
//Tinh tien dien
void doitien()
{
	printf("\tChuc nang nay hien chua co");
}
// Cau nay bo
void laisuat()
{
	int tienVay,i;
    printf("\n");
	printf("Xin moi nhap so tien ban muon vay:");
	scanf("%d",&tienVay);
	int tienLai; // tien lai moi thang
	int tienGoc=tienVay/24; // tien goc can tra moi thang
	int tienTra;//tien tra hang thang = tien goc + tien lai
	int tienCon;//tien con lai sau khi tra tien goc
	tienCon = tienVay;

	printf("\nKy han | Lai phai tra | Goc phai tra  | Tien phai Tra | So tien con lai | \n");
	for( i=1;i<=24 ;i++){
	tienLai=tienCon*0.05;
	tienTra= tienGoc + tienLai;
	tienCon = tienCon - tienGoc;
	printf("%6d |",i );
	printf("%13d | ",tienLai);
	printf("%13d | ",tienGoc);
	printf("%13d | ",tienTra);
	printf("%15d | ",tienCon);
		
		printf("\n");
}
}
//Lai suat vay ngan hang
void vaytienmuaxe()
{
	printf("\tChuc nang nay hien chua co");
}
// Cau nay bo
void sinhvien()
{
struct sinhVien{
	char hoTen[50];
	float diemTrungBinh;
};
    int n,i,j; 
        printf("Nhap so luong sinh vien: ");scanf("%d",&n);
        struct sinhVien sv[n];
        for(i =0;i<n;i++){
        	fflush(stdin);
        printf("\nNhap ho ten sinh vien:");gets(sv[i].hoTen);
        printf("\nNhap diem trung binh sinh vien:");scanf("%f",&sv[i].diemTrungBinh);
      }
      
      for(i=0;i<n;i++){
      	for(j=i+1;j<n;j++){
      		if(sv[i].diemTrungBinh<sv[j].diemTrungBinh){
      			struct sinhVien temp;
      		    temp = sv[i];
      			sv[i]=sv[j]; 
				sv[j]=temp; 
			}
		}
	}  		
      printf("--------------Danh sach sinh vien--------------");
      for(i = 0;i<n;i++){
      	printf("\n");
      	printf("\nSinh vien: %s",sv[i].hoTen);
      	printf("\nDiem Trung Binh:%.1f\n",sv[i].diemTrungBinh);
      	if(sv[i].diemTrungBinh>=9){
      		printf("Hoc luc: Xuat xac");
      	
      	}else if(sv[i].diemTrungBinh>=8){
      		printf("Hoc luc: Gioi");
      	} else if(sv[i].diemTrungBinh>=6.5){
      		printf("Hoc luc: Kha");
		}else if(sv[i].diemTrungBinh>=5){
      		printf("Hoc luc: Trung Binh");
      	}else printf("Hoc luc: Yeu");
      	}
    }
//---------------------------------------------------
void fpoly_lott()
{
	printf("\tChuc nang nay hien chua co");
}
// Cau nay bo
void phanso()
{
struct PhanSo{
	float tu;
	float mau;
	};


struct PhanSo so1,so2;

	printf("Nhap phan so thu 1:\n");
	printf("Nhap phan tu 1: ");scanf("%f",&so1.tu);
	printf("Nhap phan mau 1: ");scanf("%f",&so1.mau);
	printf("\n");
	printf("Nhap phan so thu 2:\n");
	printf("Nhap phan tu 2: ");scanf("%f",&so2.tu);
	printf("Nhap phan mau 2: ");scanf("%f",&so2.mau);
	printf("\n");
	
	struct PhanSo tong,hieu,thuong,tich;
	
	tich.tu=so1.tu*so2.tu;
	tich.mau=so1.mau*so2.mau;
	
	thuong.tu=so1.tu*so2.mau;
	thuong.mau=so1.mau*so2.tu;
	
	hieu.tu=so1.tu*so2.mau - so1.mau*so2.tu;
	hieu.mau=so1.mau*so2.mau;
	
	tong.tu=so1.tu*so2.mau + so1.mau*so2.tu;
	tong.mau=so1.mau*so2.mau;

	printf("Tich cua 2 phan so la: %.1f/%.1f = %f \n",tich.tu,tich.mau,(tich.tu)/(tich.mau));
	printf("Thuong cua 2 phan so la: %.1f/%.1f = %f\n",thuong.tu,thuong.mau,(thuong.tu)/(thuong.mau));
	printf("Hieu cua 2 phan so la: %.1f/%.1f = %f \n",hieu.tu,hieu.mau,(hieu.tu)/(hieu.mau));
	printf("Tong cua 2 phan so la: %.1f/%.1f = %f\n",tong.tu,tong.mau,(tong.tu)/(tong.mau));

	
}

//---------------------------------------------------
