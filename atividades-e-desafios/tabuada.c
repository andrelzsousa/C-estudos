#include <stdio.h>

int main()
{
    int n;
    printf("Insira o numero do qual voce deseja ver a tabuada: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        int result = i * n;
        printf("%d x %d = %d\n", n, i, result);
    }
}