#include<stdio.h>
#define size 5
main()
{
	int a[size];
	printf("enter Array elements");
	for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<size;i++)
	printf("\n%d\n",a[i]);
}
