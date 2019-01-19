#include<stdio.h>
int main()
{
	int a[10000],n,sum,i;
	scanf("%d",&n);
	sum=n;
	for(i=0;sum>0;i++)
	{
		a[i]=sum%10;
		sum/=10; 
	}
	for(int j=1;j<n;j++)
	{
		for(int t=0;t<i;t++)
			a[t]*=j;
		for(int t=0;t<i;t++)
		{
			if(t==i-1)
			{
				if(a[t]>=10)
					i++;
			}
			if(a[t]>=10)
			{
				a[t+1]+=(a[t]/10);
				a[t]%=10;
			}
		}
	}
	for(int t=i-1;t>=0;t--)
		printf("%d",a[t]);
	return 0;
}
