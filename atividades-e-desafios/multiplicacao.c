#include <stdio.h>

int main()
{

    int num1, num2, mult;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);

    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    mult = num1 * num2;
    printf("1o numero: %d\n2o numero: %d\n", num1, num2);
    printf("multiplicacao: %d", mult);
}