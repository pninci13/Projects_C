#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char gab[10]={'a','a','b','b','c','c','d','d','e','e'};
    char respostas[10];
    int RA, nota=0, aux=0,nalunos=0,naprovados=0,taprovacao,aux2=0,taxa;
    int frequencia[10]={0};
    float somadenotas=0;
    do
    {
    nota=0;
    printf("Para come�ar digita seu RA :");
    scanf("%d",&RA);
    fflush(stdin);
    for (int i=0; i<10 ; i++)
        {
          printf("Digite a reposta da quest�o %d: ",i+1);
          scanf("%c",&respostas[i]);
          fflush(stdin);
          if (respostas[i]==gab[i])
          {
           nota++;
          }
        }
     frequencia[nota]++;
     somadenotas=somadenotas+nota;
     nalunos++;
     if (nota>=5)
        {
         naprovados++;
        }
        printf("\n O aluno de RA %d tem nota = %d",RA,nota);
        do
        {
        printf("\n Voc� deseja continuar a corre��o de provas? 1-[sim] 2-[n�o]");
        scanf("%d",&aux);
        }
     while (aux<1 || aux>2);
    }
    while (aux!=2);

    for (int i=0; i<10; i++)
    {

        if (frequencia[i] > aux2 )
          {
           aux2=frequencia[i];
           taxa=i;
          }

    }

    taprovacao = (naprovados/nalunos)*100;
    printf("================================");
    printf("\n1. A taxa de aprova��o � de %d %%",taprovacao);
    printf("\n2. A nota com maior frequ�ncia � %d",taxa);
    somadenotas=somadenotas/nalunos;
    printf("\n3. A nota m�dia � de %f",somadenotas);


    return 0;
}
