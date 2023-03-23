#include<stdio.h>
int main()
{
	int d,sum=0,num;
	printf("enter the number",d);
	scanf("%d",&d);
	while(num!=0)
	{
		d=sum/10;
		sum+=d;
		num/=10;
		}
		printf("sum of %d is %d",sum);
		return 0;
	
}
