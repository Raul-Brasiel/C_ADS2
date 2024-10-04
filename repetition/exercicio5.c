#include <stdio.h>

int main() {
    int idade=0, cont=0;
    double media=0;

    while(idade>=0){
        scanf("%d",&idade);
        if(idade>=0){
            media = media + idade;
            cont++;
        }
    }

    media = media/cont;

    printf("%.2lf\n",media);

    return 0;
}
