#include<stdio.h>
 main()
{
	int i,n;
	int flag=1;
	printf("enter your num:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
		
	}	
		for(i=1;i<n-1;i++)
		{
			if(n%a[i]==0)
			{
				flag=0;
				break;
			}
			
		}	
	if(flag)
	{
		printf("it is  a prime number");
	}
	else
	{
		printf("it is not a prime number");
	}
	return 0;
}
// 0 1 2 3 4 5 6 7 8
