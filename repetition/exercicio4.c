#include <stdio.h>
 
int main() {
	int n, contA = 0, contG = 0, contD = 0, i = 0;
	
	while(i==0){
		scanf("%d",&n);
		
		if(n == 1){
			contA++;
		} else if(n == 2){
			contG++;
		} else if(n == 3){
			contD++;
		} else if(n == 4){
			i = 1;
		}
	}
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",contA, contG, contD);
	
    return 0;
}
