#include <stdio.h>
#include <stdlib.h>
double obterTres(double v[], char c){
    for (int i =0;i<3;i++){
        printf("\n%c%d: ", c, i+1);
        scanf("%lf",&v[i]);
    }
    return 0;
}
void exibeponto(double V[]){
    for (int i=0; i<3; i++){
        printf("|%lf|", V[i]);
    }
    printf("\n");
}
void exibelinha(double V[], double v[]){
    char dimensao='x';
    for (int i=0; i<3; i++){
        printf("|%c=%lf+@(%lf)|\n", dimensao+i, V[i],v[i]);
    }
}

int main()
{
    double pontoA[3], vetora[3];
    printf("digite o Primeiro ponto \n");
    obterTres(pontoA, 'A');
    exibeponto(pontoA);
    printf("digite o seu vetor \n");
    obterTres(vetora, 'a');
    exibelinha(pontoA,vetora);
}
