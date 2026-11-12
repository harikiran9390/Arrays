//print sum of the n integers using array
#include<stdio.h>
#define size 50
main()
{
	int a[size],n,sum=0;
	printf("enter how many array elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("\ntotal sum value= %d",sum);
}
