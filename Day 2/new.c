#include<stdio.h>
void main()
{
	int n,m,r=0,p;
	printf("Enter a number.\n");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		n=n/10;
		r=r*10/m;
	}
	printf("%d",r);
	if(p==n)
	{
		printf("Enter no is palindrome.\n");
	}
	else
	{
		printf("Number is not palindrome.\n");
	}

}
