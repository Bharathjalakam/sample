#include<stdio.h>
void main()
{
	int a=0,b=1,c,n;
	printf("Enter limit...\n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d--",a);
		c=a+b;
		a=b;
		b=c;
		n--;
	}
}
# sample
