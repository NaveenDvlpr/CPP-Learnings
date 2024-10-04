#include<stdio.h>
#include<string.h>
main()
{
	char str1[2],str2[20],str3[20];
	int i,a;
	printf("enter number1:");
	scanf("%s",&str1);
	printf("enter number2:");
	scanf("%s",&str2);
	a=strlen(str1);
	printf("a=%d\n",a);
	for(i=0;i<a-1;i++)
		{
			printf("i=%d\n",i);
			str3[i]=str1[i];
		}
		
	printf("enter number3:%s",str3);
}
