//Swap two numbers with temparary variable
#include<stdio.h>
main()
{
	int a,b,temp;
    printf("enter two integers");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n%d  %d",a,b);
}
