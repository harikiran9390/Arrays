// Find Sum of Array Elements
#include<stdio.h>
main()
{
	int a[4],sum=0;
	printf("Enter array elements");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<4;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
