#include<stdio.h>
main()
{
	int a[10];
	printf("enter array elements:");
	for(int i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(int i=10;i>0;i--)
	printf("%d ",a[i]);
}
