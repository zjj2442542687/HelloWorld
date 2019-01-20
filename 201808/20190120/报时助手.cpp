#include<stdio.h>
int fun(int h);
int l=0;
int main()
{
	int a[2];
	for(int i=0;i<2;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<2;i++)
	{
		fun(a[i]);
		printf(" ");
	}
}
int fun(int h)
{
	l++;
	if(l==2&&h==0)
	{
		printf("o'clock");
		return 0;
	}
	if(h<=20)
	{
		switch(h)
		{
			case 0:printf("zero");break;
			case 1:printf("one");break;
			case 2:printf("two");break;
			case 3:printf("three");break;
			case 4:printf("four");break;
			case 5:printf("five");break;
			case 6:printf("six");break;
			case 7:printf("seven");break;
			case 8:printf("eight");break;
			case 9:printf("nine");break;
			case 10:printf("ten");break;
			case 11:printf("eleven");break;
			case 12:printf("twelve");break;
			case 13:printf("thirteen");break;
			case 14:printf("fourteen");break;
			case 15:printf("fifteen");break;
			case 16:printf("sixteen");break;
			case 17:printf("seventeen");break;
			case 18:printf("eighteen");break;
			case 19:printf("nineteen");break;
			case 20:printf("twenty");break;
		}
	}
	else
	{
		switch(h/10)
		{
			case 2:printf("twenty");break;
			case 3:printf("thirty");break;
			case 4:printf("forty");break;
			case 5:-printf("fifty");break;
		}
		printf(" ");
		switch(h%10)
		{
			case 1:printf("one");break;
			case 2:printf("two");break;
			case 3:printf("three");break;
			case 4:printf("four");break;
			case 5:printf("five");break;
			case 6:printf("six");break;
			case 7:printf("seven");break;
			case 8:printf("eight");break;
			case 9:printf("nine");break;
		}
		
	}
}
