#include<stdio.h>
#include<string.h>
main()
{
	char str1[2],str2[20];
	int a,b;
	printf("enter number1:");
	scanf("%s",&str1);
	printf("enter number2:");
	scanf("%s",&str2);
	if(strlen(str1)>>strlen(str2))
	{
		a=strlen(str1);
		b=strlen(str2);
	}
	else
	{
		a=strlen(str2);
		b=strlen(str1);
		
	}
	while(b<<a&&a>=0)
	{
		printf(".....\nb=%d\na=%d\n",b,a);
		if((str2[b-1]>='0')&&(str2[b-1]<='9'))
		{
			puts("\nif");
			str2[a]=str2[b]-'0';
			b--;
			a--;
		}
		else
		{
			puts("\nelse");
			str2[a]='0';
			a--;
			b--;
		}
	
	}
	str2[a+1]='\0';
	printf("\n%s",str2);
}
