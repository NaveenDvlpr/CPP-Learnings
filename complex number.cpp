#include<stdio.h>
main()
{
	char str1[5],str2[5];
	int i,sum=0;
	printf("enter your num:");
	scanf("%s",str1);
	printf("\n.....");
	scanf("%s",str2);
	for(i=0;i<=5;i++)
	{
		sum=str1[i]+str2[i];
		puts("..");
	}
	
	
}
