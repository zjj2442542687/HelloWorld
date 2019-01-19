#include<stdio.h>
int main()
{
	int a[100],min1=0,min2=0,n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(;n>1;)
	{
		min1=a[0];
		a[0]=a[n-1],a[n-1]=min1;
		for(int i=0;i<n;i++)
		{
			if(min1>a[i])
			{
				min1=a[i];
				a[i]=a[n-1],a[n-1]=min1;
			}
		}
		min2=a[0];
		a[0]=a[n-2],a[n-2]=min2;
		for(int i=0;i<n-1;i++)
		{
			if(min2>a[i])
			{
				min2=a[i];
				a[i]=a[n-2],a[n-2]=min2;
			}
		}
		a[n-2]=min1+min2;
		sum+=a[n-2]; 
		n--;
	}
	printf("%d",sum);
	
	
}
