#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,b;
	char a[100];
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
	{
		a[i]+='A'+i;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b=i-j;
			b=abs(b);
			printf("%c",a[b]);
		}
		printf("\n");
	}
	return 0;
 } 
