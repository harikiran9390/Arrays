#include<stdio.h>
main()
{
	int a[100],n;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter Array elements");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
