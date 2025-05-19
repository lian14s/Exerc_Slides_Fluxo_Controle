#include <stdio.h>

/*
Exercício 3: Dias da Semana (Básico - switch-case)
Desenvolva um programa que leia um número de 1 a 7 e imprima o dia da semana correspondente
(1 = Domingo, 2 = Segunda, ..., 7 = Sábado). Use switch-case.
Se o número for fora desse intervalo, exiba: "Dia inválido".

*/

int main()
{
    int dia;
    printf("Digite um numero (1-7):");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Segunda \n");
        break;
    case 2:
        printf("Terca \n");
        break;
    case 3:
        printf("Quarta \n");
        break;
    case 4:
        printf("Quinta \n");
        break;
    case 5:
        printf("Sexta \n");
        break;
    case 6:
        printf("Sabado \n");
        break;
    case 7:
        printf("Domingo \n");
        break;
    default:
        printf("Dia invalido \n");
        break;
    }
    return 0;
}