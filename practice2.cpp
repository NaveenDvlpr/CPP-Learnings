#include<stdio.h>
#include<string.h>
main()
{
	int size = 1000;
	char str1[size],str2[size],str3[size];
	int a,b,x,y,i;
	printf("enter number1:");
	scanf("%s",&str1);
	printf("enter number2:");
	scanf("%s",&str2);
	x=strlen(str1);
	y=strlen(str2);
	if(x>y)
	{
		strcpy(str3,str2);
		printf("copied number3:%s\n",str3);
		str3[x]='\0';
		a=x-1;
		b=y-1;
	}
	else
	{
		strcpy(str3,str1);
		printf("copied number3:%s\n",str3);
		str3[y]='\0';
		a=y-1;
		b=x-1;
		
	}
	while(a>b)
	{
		printf(".....\nb=%d\na=%d\n",b,a);
		if((str3[b]>='0')&&(str3[b]<='9'))
		{
			puts("\n...");
			str3[a]=str3[b];
			b--;
			a--;
		}
		else
		{
			str3[a]='0';
			a--;
		}
	
	}
	printf("\n%s",str3);
}
