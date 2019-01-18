#include<stdio.h>
#include<string.h>
char a[100000],b[400000],c[400000];
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",a);
		int len=0,i;
		for(i=strlen(a)-1;i>=0;i--)
		{
			int v;
			if(a[i]>='0'&&a[i]<='9')
			{
				v=a[i]-'0';
			} 
			else  
			{
				v=a[i]-'A'+10;
			}
			int j;
			for(j=0;j<4;j++)
			{
				b[len++]=v%2+'0';
				v/=2;
			}
		}
		b[len]='\0';
		int x=0,y=1,z=0;
		for(i=0;i<len;i++)
		{
			if(y==4||i==len-1)
			{
				x=y*(b[i]-'0')+x;
				y=1;
				c[z++]=x+'0';
				x=0;
			}
			else
			{
				x=y*(b[i]-'0')+x;
				y*=2; 
			}
		}
		i=z-1;
		while(i>=0&&c[i]=='0')
			i--;
		if(i<0)
			printf("0");
		for(;i>=0;i--)
		{
			printf("%c",c[i]);
		}
		printf("\n");
	}
	return 0;
}
