#include <stdio.h>
 
int main() {
	double salario, reajuste;
	
	scanf("%lf",&salario);
	
	if(salario<=400){
		reajuste = salario*0.15;
		salario = salario*1.15;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",salario,reajuste);
	}else if(salario>400 && salario<=800){
		reajuste = salario*0.12;
		salario = salario*1.12;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",salario,reajuste);
	}else if(salario>800 && salario<=1200){
		reajuste = salario*0.10;
		salario = salario*1.10;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",salario,reajuste);
	}else if(salario>1200 && salario<=2000){
		reajuste = salario*0.07;
		salario = salario*1.07;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",salario,reajuste);
	}else if(salario>2000){
		reajuste = salario*0.04;
		salario = salario*1.04;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",salario,reajuste);
	}
    return 0;
}
