//print sum of the float array
#include<stdio.h>
main()
{
	float a[5],sum=0;
	printf("enter array elements");
	for(int i=0;i<5;i++)
	scanf("%f",&a[i]);
	for(int i=0;i<5;i++)
	sum+=a[i];
	printf("%f",sum);
}
