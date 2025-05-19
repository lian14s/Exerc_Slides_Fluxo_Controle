#include <stdio.h>

/* 
Exercício 1: Categoria de Idade (Intermediário - if-else aninhados)
Faça um programa que classifique uma pessoa em categorias de idade:

Criança (0–12 anos),
Adolescente (13–17),
Adulto (18–59),
Idoso (60+).

*/

int main(){
    int idade;
    printf("Digite a sua idade:");
    scanf("%d", &idade);

    if(idade >= 0 && idade <= 12){
        printf("Crianca");
    } else if(idade >= 13 && idade <= 17){
        printf("Adolescente");
    } else if (idade >= 18 && idade <= 59){
        printf("Adulto");
    
    }else {
        printf("Idoso"); 

} 
return 0;

} 
