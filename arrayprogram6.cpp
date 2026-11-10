//Average of Array Elements
#include<stdio.h>
main()
{
	int a[5],sum=0;
	float avg;
	printf("enter array elements");
	for(int i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<5;i++)
	sum+=a[i];
    avg=(float)sum/5.0;
	printf("average=%f",avg);
}
