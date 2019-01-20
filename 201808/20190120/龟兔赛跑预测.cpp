#include<stdio.h>
int main()
{
	int  v1,v2,t,s,l;
	scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
	int sum=l/v1;
	for(int i=1;i<sum;i++)
	{
		if((v1*i-v2*i)>=t)
		{
			if((l/v1+s)>(l/v2))
				printf("T\n%d",l/v2);
			else if((l/v1+s)<(l/v2))
				printf("R\n%d",l/v1+s);
			else if((l/v1+s)==(l/v2))
				printf("D\n%d",l/v2);
		}
	}
	return 0;
}
