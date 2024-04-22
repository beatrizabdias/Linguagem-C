# include <stdio.h>
void parOuimpar (int n)
{
    int dobro, triplo;
    if(n % 2 == 0)
    {   dobro = n*2;
        printf("\n%d e par", n);
        printf("\nDobro: %d", dobro);
    }
    else
    {
        triplo= n*3;
        printf("\n %d e impar", n);
        printf("\nTriplo: %d", triplo);
    }
}
int main()
{
    int num;
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    parOuimpar (num);
    return 0;
}