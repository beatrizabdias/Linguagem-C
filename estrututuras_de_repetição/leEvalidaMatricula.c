//Programa ler matricula no formato AASNN,
//verificando se é valida ou não
// AA (10 a 22)
// S (1 ou 2)
// NN (1 a 90)
# include <stdio.h>
int verificaMatricula (int matr)
{
    int aa, s, nn;
    aa = matr / 1000;
    s = (matr % 1000)/10;
    nn = matr % 100;
    if (aa >= 10 && aa <= 22 && s >=1 && s <=2 && nn >= 1 && nn <= 90)
        return 1;
    else
        return 0;
}
int main()
{
    int matricula, verif;
    printf("Digite a matricula:");
    scanf("%d", &matricula);
    verif = verificaMatricula (matricula);
    if (verif)
        printf("Matricula valida!");
    else   
        printf("Matricula invalida!");
    return 0; 
}