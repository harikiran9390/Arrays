#include<stdio.h>
//print sub of 2-d float matrix
main()
{
	float a[10][10],b[10][10],c[10][10];
	int i,j;
	printf("Enter 1st matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter 2st matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%f",&b[i][j]);
		}
	}
	printf("results\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%f ",c[i][j]);
		}
		printf("\n");
	}
}
