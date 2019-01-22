 #include<stdio.h>
typedef struct stu
{
	int kaishi;
	int jieshu;
}stu;
int main()
{
	stu a[100],sum;
	int b[100]={0},n,fun,max,l;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i].kaishi,&a[i].jieshu);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j].kaishi>a[j+1].kaishi)
			{
				sum=a[j],a[j]=a[j+1],a[j+1]=sum;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(j!=i)
			{
				if(a[j].kaishi>=fun)
				{
					b[i]++;
					fun=a[j].jieshu; 
				}
			}
			else if(j==i)
			{
				b[i]++;
				fun=a[j].jieshu;
			}
		}
	}
	max=b[0];
	for(int i=0;i<100;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			l=i;
		}
	}
	printf("%d\n",max);
	for(int j=l;j<n;j++)
	{
		if(j!=l)
		{
			if(a[j].kaishi>=fun)
			{
				fun=a[j].jieshu;
				printf("%d %d\n",a[j].kaishi,a[j].jieshu);
			}
		}
		else if(j==l)
		{ 
			fun=a[j].jieshu;
			printf("%d %d\n",a[j].kaishi,a[j].jieshu);
		}
	}
	return 0;
}
