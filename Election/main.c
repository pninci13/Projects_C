#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeleitores=0,escolha=0,joao=0,maria=0,branco=0,nulo=0,votos=0,senha=0;
    float porcentagem=0;
    char[10] teste = {'t','e','s','t','e'}

    printf("Digite Numero de Eleitores:");
    scanf("%d",&numeleitores);

    do{
            system("cls");
    printf("\n ____");
    printf("\n| CODIGO|      Candidato|");
    printf("\n|   11  |         Joao  |");
    printf("\n|   45  |         Maria |");
    printf("\n|   0   | Voto em Branco|");
    printf("\n ___");

    printf("\n\n\tCodigo : ");
    scanf("%d",&escolha);

    

    switch (escolha)
        {
    case 11:
        joao++;
        break;
    case 45:
        maria++;
        break;
    case 0:
        branco++;
        break;
    case 1234:
        do{
           system("cls");
            printf("Digite a senha para encerrar a secao:");
            scanf("%d",&senha);
        }while(senha!=3571);
        votos--;
        break;
    default:
        nulo++;
        }
        votos++;
        }while(senha!=3571&&votos!=numeleitores);
        porcentagem = votos/numeleitores*100;
        printf("\n\n Total de votos esperados:%d",numeleitores);
        printf("\n Total de votos computados:%d\n Correspondente a %.2f",votos,porcentagem);
        printf("\n Votos para o Joao:%d",joao);
        printf("\n Votos para a Maria:%d",maria);
        printf("\n Votos em branco:%d",branco);
        printf("\n Votos nulo:%d\n",nulo);

        system("pause");

        return 0;
}

















