#include <stdio.h>
 
int main() {
	double valor,v;
	int notas;
	
	scanf("%lf",&valor);
	
	notas = valor/100;
	v = valor-(notas*100);
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",notas);
	notas = v/50;
	v = v-(notas*50);
	printf("%d nota(s) de R$ 50.00\n",notas);
	notas = v/20;
	v = v-(notas*20);
	printf("%d nota(s) de R$ 20.00\n",notas);
	notas = v/10;
	v = v-(notas*10);
	printf("%d nota(s) de R$ 10.00\n",notas);
	notas = v/5;
	v = v-(notas*5);
	printf("%d nota(s) de R$ 5.00\n",notas);
	notas = v/2;
	v = v-(notas*2);
	printf("%d nota(s) de R$ 2.00\n",notas);
	notas = v/1;
	v = v-(notas*1);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",notas);
	notas = v/0.5;
	v = v-(notas*0.5);
	printf("%d moeda(s) de R$ 0.50\n",notas);
	notas = v/0.25;
	v = v-(notas*0.25);
	printf("%d moeda(s) de R$ 0.25\n",notas);
	notas = v/0.1;
	v = v-(notas*0.1);
	printf("%d moeda(s) de R$ 0.10\n",notas);
	notas = v/0.05;
	v = v-(notas*0.05);
	printf("%d moeda(s) de R$ 0.05\n",notas);
	v = v*100;
	printf("%0.lf moeda(s) de R$ 0.01\n",v);
	
    return 0;
}
