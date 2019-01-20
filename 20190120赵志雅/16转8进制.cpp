#include"stdio.h"
#include"string.h"
#include"math.h"
main()
{char a[10];int b[30],i,j=0,k=0,s=0;
gets(a);
for(i=strlen(a)-1;i>=0;i--,j++)
{
	if(a[i]>'0'&&a[i]<'9')
			{
			k=pow(16,j);s+=a[i]-'0'*k;
			}
	else switch(a[i])
		{case 'A':
		case 'a': k=pow(16,j);s+=10*k;break;
		case 'B':
		case 'b': k=pow(16,j);s+=11*k;break;
		case 'C':
		case 'c': k=pow(16,j);s+=12*k;break;
		case 'D':
		case 'd': k=pow(16,j);s+=13*k;break;
		case 'E':
		case 'e': k=pow(16,j);s+=14*k;break;
		case 'F':
		case 'f': k=pow(16,j);s+=15*k;break;
		}
}//十六进制转十进制到这结束

i=0;j=0,k=0;
while(s!=0)
{b[i++]=s%8;
s/=8;
 } i--;
while(i>=0)
printf("%d",b[i--]);


 } 
