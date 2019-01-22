#include"stdio.h"
#define N 1000
int main(){
	int n,p,sum=0;
	double t=0,m[N],v[N],pj[N],k;
	scanf("%d %d",&n,&p);
	for(int i=0;i<n;i++){
		scanf("%lf %lf",&m[i],&v[i]);
	}
	for(int i=0;i<n;i++){
		pj[i]=v[i]/m[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(pj[i]<pj[j]){
				k=pj[i];
				pj[i]=pj[j];
				pj[j]=k;
				 k=v[i];
				 v[i]=v[j];
				 v[j]=k;
				  	k=m[i];
				    m[i]=m[j];
			    	m[j]=k;
			}
		}
	}
	for(int i=0;i<n;i++){
		if((sum+m[i])<=p){
			t=t+v[i];
			sum=sum+m[i];
		}else{
			if((p-sum)>0){
				t=t+(pj[i]*(p-sum));
			}
			break;
		}
	}
	printf("%lf",t);
	return 0;
}
