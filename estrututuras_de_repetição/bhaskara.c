# include <stdio.h>
# include <math.h>
void bhaskara (float a, float b, float c)
{
    float delta, x1, x2, denom, raiz;
    delta = pow (b, 2)- 4*a*c;
    if (delta < 0)
        printf("Equacao nao possui raizes reais");
    else
        if (delta == 0)
        {
            x1 = -b/(2*a);
            printf("Raiz: %f", x1);
            printf("\nEquacao de raiz real unica");
        }
    else  
    { 
        denom = 2*a;
        raiz = sqrt(delta);
        x1 = (-b + raiz)/denom;
        x2 = (-b - raiz)/denom;
        printf("Raizes sao: %f e %f", x1, x2);
        printf("\nEquacao possui duas raizes reais distintas");
    }
}
int main()
{
    float coefa, coefb, coefc;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f%f%f", &coefa, &coefb, &coefc);
    bhaskara (coefa, coefb, coefc);
    return 0;
}