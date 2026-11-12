#include<stdio.h>
//swap two numbers without using temp variable
main()
{
	int a,b;
	printf("enter variable");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}
