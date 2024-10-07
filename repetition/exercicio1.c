#include<stdio.h>

int main(){
	int n, i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		double n1,n2,n3;
		scanf("%lf %lf %lf",&n1,&n2,&n3);
		
		n1=n1*2;
		n2=n2*3;
		n3=n3*5;

		double media = (n1+n2+n3)/10;
		
		printf("%.1lf\n",media);
	}
	return 0;
}
