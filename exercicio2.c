#include <stdio.h>

/*
Exercício 2: Calculadora de Operações Básicas
(Intermediário - switch-case)
Crie uma calculadora que leia dois números e um operador (+, -, *, /) e,
usando switch-case, realize a operação correspondente. Trate o caso de divisão por zero.
*/

int main()
{
    float num1, num2;
    char operador;
    printf("Digite dois numeros e um operador (+, -, *, /): ");
    scanf("%f %f %c", &num1, &num2, &operador);
    fflush(stdin);
    switch (operador)
    {
    case '+':
        printf("Resultado: %.2f\n", num1 + num2);
        break;
    case '-':
        printf("Resultado: %.2f\n", num1 - num2);
        break;
    case '*':
        printf("Resultado: %.2f\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("Resultado: %.2f\n", num1 / num2);
        }
        else
        {
            printf("Erro: Divisao por zero!\n");
        }
        break;
    default:
        printf("Operador invalido!\n");
    }
}
