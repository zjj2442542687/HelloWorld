#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],sum=0,fun=0,l=0;
	int c[101]={0};
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)%2!=0)a[strlen(a)/2]-=48;
	if(strlen(b)%2!=0)b[strlen(b)/2]-=48;
	for(int i=0,j=strlen(a)-1;i<strlen(a)/2;i++,j--)
	{
		fun=a[i],a[i]=a[j],a[j]=fun;
		a[i]-=48;a[j]-=48;
	}
	for(int i=0,j=strlen(b)-1;i<strlen(b)/2;i++,j--)
	{
		fun=b[i],b[i]=b[j],b[j]=fun;
		b[i]-=48;b[j]-=48;
	}
	for(int i=0;i<strlen(a)||i<strlen(b);l++,i++) 
	{
		if(i>strlen(a))
			c[i]=b[i];
		else if(i>strlen(b))
			c[i]=a[i];
		else
			c[i]=a[i]+b[i];
	}
	for(int t=0;t<l;t++)
	{
		
		if(c[t]>=10)
		{
			if(t==l-1)
					l++;
			c[t+1]+=(c[t]/10);
			c[t]%=10;
		}
	}
	for(int i=l-1;i>=0;i--)
		printf("%d",c[i]);
	return 0;
}

