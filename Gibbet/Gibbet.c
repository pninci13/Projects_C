///Diogo Nascimento Bertozi RA: 20150157
///Luca Camilotti Steula RA:20021150
///Pedro do Nascimento Ninci - RA: 20086120 - (Faço apenas teórica com a Lucia, mas fiz o projeto com o Diogo e o Luca)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int i,c,tema,chances=0,ponto=90,acertos=0,jogardenovo,controle=0,controlefinal=0;
    char tentativa,t1[20],t2[20],t3[20],letrasdigitadas[20]= {};

    char s1[20]= {'L','o','b','i','s','o','m','e','n','s'};
    char s2[20]= {'B','o','x'};
    char s3[20]= {'O','r','i','g','e','m'};
    char s1a[20]= {'_','_','_','_','_','_','_','_','_','_'};
    char s2a[20]= {'_','_','_'};
    char s3a[20]= {'_','_','_','_','_','_'};


    char s1m[20];
    char s2m[20];
    char s3m[20];

    char p1[20]= {'E','n','g','e','n','h','e','i','r','o'};
    char p2[20]= {'B','o','m','b','e','i','r','o'};
    char p3[20]= {'P','o','l','i','c','i','a','l'};
    char p1a[20]= {'_','_','_','_','_','_','_','_','_','_'};
    char p2a[20]= {'_','_','_','_','_','_','_','_'};
    char p3a[20]= {'_','_','_','_','_','_','_','_'};

    char p1m[20];
    char p2m[20];
    char p3m[20];

    char j1[20]= {'G','T','A'};
    char j2[20]= {'V','a','l','o','r','a','n','t'};
    char j3[20]= {'C','s','G','o'};
    char j1a[20]= {'_','_','_'};
    char j2a[20]= {'_','_','_','_','_','_','_','_'};
    char j3a[20]= {'_','_','_','_'};

    char j1m[20];
    char j2m[20];
    char j3m[20];

    strcpy(s1m,s1);
    strcpy(s2m,s2);
    strcpy(s3m,s3);

    strcpy(p1m,p1);
    strcpy(p2m,p2);
    strcpy(p3m,p3);

    strcpy(j1m,j1);
    strcpy(j2m,j2);
    strcpy(j3m,j3);

    strupr(j1m);
    strupr(j2m);
    strupr(j3m);

    strupr(p1m);
    strupr(p2m);
    strupr(p3m);

    strupr(s1m);
    strupr(s2m);
    strupr(s3m);

    do
    {
        fflush(stdin);
        printf("\n\t Escolha entre os temas:\n 1- Titulos de Livros\n 2-Jogos Eletronicos\n 3-Profissoes \n");
        scanf("%d",&tema);
        acertos=0;
        chances=0;
        controlefinal=0;
        switch(tema)
        {
        case 1:

        controlefinal=1;

            do
            {
                system("cls");
                printf("\n\t\t Livros\n  %s\n  %s\n  %s \n ",s1a,s2a,s3a);
                printf("\n\t Digite o caractere que voce acha que tem, caso deseje advinhar as palavras tecle ?:  ");
                fflush(stdin);

                do
                {

                    scanf("%c",&tentativa); ///vetor salvando tentativas
                    tentativa=toupper(tentativa);
                    fflush(stdin);
                    for(i=0; i<10; i++)
                    {

                        if(letrasdigitadas[i]==tentativa)
                        {
                            printf("\n Voce ja digitou essa letra, tente novamente\n\t");
                            system("pause");
                            controle=controle+1;
                            system("cls"); ///tava printando 2x
                            printf("\n\t\t Livros\n  %s\n  %s\n  %s \n ",s1a,s2a,s3a,ponto);
                            printf("\n\t Digite o caractere que voce acha que tem, caso deseje advinhar as palavras tecle ?:  ");
                            fflush(stdin);

                        }
                    }

                }
                while(controle>0);

                controle=0;

                for(i=0; i<=10; i++)
                {
                    if (s1m[i]==tentativa)
                    {
                        s1a[i]=s1[i];
                    }
                    if (s2m[i]==tentativa)
                    {
                        s2a[i]=s2[i];
                    }
                    if (s3m[i]==tentativa)
                    {
                        s3a[i]=s3[i];
                    }



                }

                letrasdigitadas[chances]=tentativa;
                chances=chances+1;
                ponto=ponto-5;
            }
            while(chances<7 && tentativa!='?');

            if(ponto!=35)
            {
                ponto=ponto+5;
                chances++;
            }

            fflush(stdin);
            printf("\n\t Qual a 1?:");
            gets(t1);
            strupr(t1);
            if (strcmp(t1,s1m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos");
                ponto=ponto-10;
            }
            printf("\n\t Qual a 2?:");
            gets(t2);
            strupr(t2);
            if (strcmp(t2,s2m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos");
                ponto=ponto-10;
            }
            printf("\n\t Qual a 3?:");
            gets(t3);
            strupr(t3);
            if (strcmp(t3,s3m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos\n");
                ponto=ponto-10;
            }


            break;
        case 2:

            controlefinal=1;

            do
            {
                system("cls");
                printf("\n\t\t Livros\n  %s\n  %s\n  %s \n ",j1a,j2a,j3a);
                printf("\n\t Digite o caractere que voce acha que tem, caso deseje advinhar as palavras tecle ?:  ");
                fflush(stdin);

                do
                {

                    scanf("%c",&tentativa); ///vetor salvando tentativas
                    tentativa=toupper(tentativa);
                    fflush(stdin);
                    for(i=0; i<10; i++)
                    {

                        if(letrasdigitadas[i]==tentativa)
                        {
                            printf("\n Voce ja digitou essa letra, tente novamente\n\t");
                            system("pause");
                            controle=controle+1;
                            system("cls"); ///tava printando 2x
                            printf("\n\t\t Livros\n  %s\n  %s\n  %s \n ",j1a,j2a,j3a);
                            printf("\n\t Digite o caractere que voce acha que tem, caso deseje advinhar as palavras tecle ?:  ");
                            fflush(stdin);

                        }
                    }

                }
                while(controle>0);

                controle=0;

                for(i=0; i<=10; i++)
                {
                    if (j1m[i]==tentativa)
                    {
                        j1a[i]=j1[i];
                    }
                    if (j2m[i]==tentativa)
                    {
                        j2a[i]=j2[i];
                    }
                    if (j3m[i]==tentativa)
                    {
                        j3a[i]=j3[i];
                    }



                }

                letrasdigitadas[chances]=tentativa;
                chances=chances+1;
                ponto=ponto-5;
            }
            while(chances<7 && tentativa!='?');

            if(ponto!=35)
            {
                ponto=ponto+5;
                chances++;
            }

            fflush(stdin);
            printf("\n\t Qual a 1?:");
            gets(t1);
            strupr(t1);
            if (strcmp(t1,j1m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos");
                ponto=ponto-10;
            }
            printf("\n\t Qual a 2?:");
            gets(t2);
            strupr(t2);
            if (strcmp(t2,j2m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos");
                ponto=ponto-10;
            }
            printf("\n\t Qual a 3?:");
            gets(t3);
            strupr(t3);
            if (strcmp(t3,j3m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos\n");
                ponto=ponto-10;
            }


            break;
        case 3:

            controlefinal=1;

            do
            {
                system("cls");
                printf("\n\t\t Livros\n  %s\n  %s\n  %s \n ",p1a,p2a,p3a);
                printf("\n\t Digite o caractere que voce acha que tem, caso deseje advinhar as palavras tecle ?:  ");
                fflush(stdin);

                do
                {

                    scanf("%c",&tentativa); ///vetor salvando tentativas
                    tentativa=toupper(tentativa);
                    fflush(stdin);
                    for(i=0; i<10; i++)
                    {

                        if(letrasdigitadas[i]==tentativa)
                        {
                            printf("\n Voce ja digitou essa letra, tente novamente\n\t");
                            system("pause");
                            controle=controle+1;
                            system("cls"); ///tava printando 2x
                            printf("\n\t\t Livros\n  %s\n  %s\n  %s \n ",p1a,p2a,p3a);
                            printf("\n\t Digite o caractere que voce acha que tem, caso deseje advinhar as palavras tecle ?:  ");
                            fflush(stdin);

                        }
                    }

                }
                while(controle>0);

                controle=0;

                for(i=0; i<=10; i++)
                {
                    if (p1m[i]==tentativa)
                    {
                        p1a[i]=p1[i];
                    }
                    if (p2m[i]==tentativa)
                    {
                        p2a[i]=p2[i];
                    }
                    if (p3m[i]==tentativa)
                    {
                        p3a[i]=p3[i];
                    }



                }

                letrasdigitadas[chances]=tentativa;
                chances=chances+1;
                ponto=ponto-5;
            }
            while(chances<7 && tentativa!='?');

            if(ponto!=35)
            {
                ponto=ponto+5;
                chances++;
            }

            fflush(stdin);
            printf("\n\t Qual a 1?:");
            gets(t1);
            strupr(t1);
            if (strcmp(t1,p1m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos");
                ponto=ponto-10;
            }
            printf("\n\t Qual a 2?:");
            gets(t2);
            strupr(t2);
            if (strcmp(t2,p2m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos");
                ponto=ponto-10;
            }
            printf("\n\t Qual a 3?:");
            gets(t3);
            strupr(t3);
            if (strcmp(t3,p3m)==0)
            {
                printf("Correto : +10 pontos");
                ponto=ponto+10;
                acertos=acertos+1;
            }
            else
            {
                printf("Incorreto : -10 pontos\n");
                ponto=ponto-10;
            }


            break;
        default:
            printf("\n\t Voce digitou algo invalido, tente novamente \n");
        }

        if(controlefinal==1)
        {
            printf("\n\tPontos:%d tentativas:%d",ponto,chances);
            printf("\n\t Quer jogar novamente? Digite 1 para sair e qualquer outro para jogar\n\t");
            scanf("%d",&jogardenovo);
        }


    }

    while(jogardenovo!=1);

    system("cls");
    printf("\n\t Jogo Encerrado\n\n\n\t");



    return 0;

}
