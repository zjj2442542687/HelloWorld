#include<stdio.h>
typedef struct stu
{
	float m;
	float v;
}stu;
int main()
{
	int n,q,l;
	float fun=0,Sum=0;
	stu a[100],sum;
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++)
		scanf("%f %f",&a[i].m,&a[i].v);
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1;j++)
			if((a[j].v/a[j].m)<(a[j+1].v/a[j+1].m))
				sum=a[j],a[j]=a[j+1],a[j+1]=sum;
	for(int i=0;i<n;i++)
	{
		fun+=a[i].v;Sum+=a[i].m;
		if(Sum>q)
		{
			Sum-=a[i].m;
			fun-=a[i].v;
			l=i;
			break;
		}
	}
	if(Sum==q)
		printf("%f",fun);
	else
	{
		fun+=((q-Sum)/a[l].m)*a[l].v;
		printf("%f",fun);
	}
	return 0;
}
