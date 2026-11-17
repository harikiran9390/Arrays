#include<stdio.h>
main()
{
	int a[50][50],b[50][50],c[50][50],i,j,r1,c1,r2,c2;
	printf("enter r1,c1,r2,c2");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	if(r1!=r2||c1!=c2)
	printf("not posiible for addition");
	else
	{
		printf("Enter a[%d][%d]",r1,c1);
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("Enter b[%d][%d]",r2,c2);
		for(i=0;i<r2;i++)
		{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	    }
	}
}
}
