#include <stdio.h>

/*
Exercício 4: Sistema de Autenticação e Acesso
(Combinando if-else e switch-case)
Desenvolva um programa em C que simule um sistema de autenticação com níveis de acesso. O programa deve:
Verificar a senha (usando if-else):
Senha correta (1234): Permite acesso e solicita o cargo do usuário.
Senha incorreta: Exibe "Acesso negado!" e encerra.
Identificar o cargo (usando switch-case):
1 - Administrador: Exibe "Acesso total ao sistema".
2 - Gerente: Exibe "Acesso parcial (relatórios e estoque)".
3 - Funcionário: Exibe "Acesso básico (apenas consultas)".
Outros: Exibe "Cargo inválido!".

*/

int main()
{
    int senha, cargo;
    printf("Digite a senha:");
    scanf("%d", &senha);
    if (senha == 1234)
    {
        printf("Acesso permitido! \n");
        printf("Digite o cargo (1-Admin, 2-Gerente, 3-Funcionario):");
        scanf("%d", &cargo);

        switch (cargo)
        {
        case 1:
            printf("Acesso total ao sistema. \n");
            break;
        case 2:
            printf("Acesso parcial (relatorios e estoque). \n");
            break;
        case 3:
            printf("Acesso basico (apenas consultas). \n");
            break;
        default:
            printf("Cargo invalido! \n");
        }
    }
    else
    {
        printf("Acesso negado!\n");
    }
    return 0;
}
