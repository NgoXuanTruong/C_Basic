#include <stdio.h>;
#include <math.h>;
main ()
{
	int a;
	printf("So nguyen ba chu so la: ");
	scanf("%d",&a);
	printf("so dao nguoc la: %d,%d,%d",a%10,(a/10)%10,a/100);
}
