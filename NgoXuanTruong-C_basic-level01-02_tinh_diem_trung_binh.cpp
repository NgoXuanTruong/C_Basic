#include <stdio.h>;
main ()
{ 
	float a,b,c;
	printf(" Nhap diem mon thu nhat : ");
	scanf("%f",&a);
	printf("Nhap diem mon thu hai : ");
	scanf("%f",&b);
	printf("Nhap diem mon thu ba : ");
	scanf("%f",&c);
	printf("Trung binh cong cua ba mon la: %0.3f" ,(a+b+c)/3);
	
}
