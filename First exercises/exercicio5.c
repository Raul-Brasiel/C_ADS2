#include <stdio.h>
 
int main(){	
	float valor1, valor2, valorF;
	int id1, id2, n1, n2;
	
	scanf("%d %d %f",&id1,&n1,&valor1);
	scanf("%d %d %f",&id2,&n2,&valor2);
	
	valorF = (n1*valor1)+(n2*valor2);
	
	printf("VALOR A PAGAR: R$ %.2f\n",valorF);
    return 0;
}
