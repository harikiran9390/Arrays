#include<stdio.h>
//print sub of 2-d integer matrix
main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j;
	printf("Enter 1st matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2st matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("results\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
