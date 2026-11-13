#include<stdio.h>
//print array elements in assending order 
#define size 5
main()
{
	int a[size],i,j;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	for(j=i+1;j<size;j++)
	{
		if(a[i]>a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<size;i++)
	printf("\n%d",a[i]);
}
