#include <stdio.h>;
#include <math.h>;
main ()
{
int a,b,c;
printf("Ngay sinh cua ban la: ");
scanf("%d",&a);
printf("\n Thang sinh cua ban la: ");
scanf("%d",&b);
printf("\n Nam sinh cua ban la : ");
scanf("%d",&c);
printf("\n Ngay Thang nam sinh la: %02d,%02d,%d",a,b,c%100);
	
}
