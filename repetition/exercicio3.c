#include <stdio.h>

int main() {
    double n1,n2;

    for(int i=0;i<2;i++){
        scanf("%lf",&n1);

        if(n1>=0 && n1<=10){
            i = 2;
        }else{
            printf("nota invalida\n");
            i--;
        }
    }
    for(int i=0;i<2;i++){
        scanf("%lf",&n2);

        if(n2>=0 && n2<=10){
            i = 2;
        }else{
            printf("nota invalida\n");
            i--;
        }
    }
    double media = (n1+n2)/2.0;

    printf("media = %.2lf\n",media);

    return 0;
}
