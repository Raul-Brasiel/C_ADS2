#include <stdio.h>
 
int main() {
	int horaI, minI, horaF, minF, tempoH,tempoM;
	
	scanf("%d %d %d %d",&horaI,&minI,&horaF,&minF);

	tempoH = horaF - horaI;
	tempoM = minF - minI;
	
	if(tempoH<0){
		tempoH = 24+(horaF-horaI);
	}
	if(tempoM<0){
		tempoM = 60 + (minF - minI);
   		tempoH--;
   		if(horaI == horaF && minI>minF){
   			tempoH = 23;
		   }
	}
	
	if(horaI == horaF && minI == minF){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempoH,tempoM);
	}
    return 0;
}
