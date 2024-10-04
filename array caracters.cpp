#include<stdio.h>
#include<string.h>
main()
{
	char str1[20],str3[20],str2[20];
	int i,num1,num2,digit,sum,l,a,b;
	int carry = 0;
	int c=0;
	printf("enter the num1:");
	scanf("%s",&str1);
	printf("enter the num2:");
	scanf("%s",&str2);
	a=strlen(str1);
	b=strlen(str2);
	if(a<=b)
	{
		c=a-1;
		l=strlen(str2);
		for(i=l-1;i>=0;i--)
		{
			if(str1[c]>0)
			{  
			c--;
			str1[i]=str1[c+1];
			
			}
			else(str1[c]==0)
			{
				str1[i]=0;
			}
			
		}
		str1[l]='\0';
	}
	else
	{
		l=strlen(str1);
		for(i=l-1;str1[i]>=0;i--)
		{
			if(str2[c]>>0)
			{
			str2[i]=str2[c];
			}
			else(str2[c]==0)
			{
				str2[i]=0;
				
			}
			c++;
		}
		str2[l]='\0';
	}
	for(i=l-1; i >= 0; i--)
	{
		 num1 = str1[i]-'0';
		 num2 = str2[i]-'0';
		 sum = num1+num2+carry;
		 digit = sum%10;
		carry = sum/10;
		str3[i] = '0'+digit;
	}
	if(carry != 0) {
		for( i = strlen(str1)-1; i >= 0; i--) {
			str3[i+1] = str3[i];
		} 
		str3[0] = '0'+carry;
		str3[strlen(str1)+1] = '\0';
	}
	else str3[strlen(str1)] = '\0';
	printf("%s",str3);
}

// 1+1 = 2
// '1'+'1' = 49 + 49 = 98 --> 98 char val

// 5/3 = 1 --> '1'+'1' = 'b' --> 

// "babi" + "moyya" --> "babimoyya"


