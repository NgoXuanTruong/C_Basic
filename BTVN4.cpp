#include <stdio.h>;
#include <math.h>;
main ()
{
	float a,b,c,C,S,p;
	printf("Canh thu nhat cua tam giac : a= ");
	scanf("%f",&a);
	printf("\n Canh thu hai cua tam giac : b= ");
	scanf("%f",&b);
	printf("\n Canh thu ba cua tam giac : c= ");
	scanf("%f",&c);
	C= a+b+c;
	printf("\n Chu vi cua tam giac la : %0.3f",C);
	p= C/2;
	S= sqrt((p-a)*(p-b)*(p-c)*p);
	printf("\n Dien tich cua tam giac la : %0.3f",S);
}
