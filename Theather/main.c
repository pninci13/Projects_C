#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

   setlocale(LC_ALL,"portuguese");
   int mapadelugares[10][20]={0},fileira=0,assento=0,ocupado;
   char letra[10]={'A','B','C','D','E','F','G','H','I','J'},escolha;
   do{
        system("cls");
   printf("Segue abaixo o mapa de lugares disponíveis no teatro: ");
   for (int i=0; i<10; i++)
    {
      printf("\n");
      printf("%c",letra[i]);
      for (int j=0; j<20; j++)
      {
       printf("%4d",mapadelugares[i][j]);
      }
    }
    printf("\n ");
    for(int i=0;i<20;i++)
    {
        printf("%4d",i+1);
    }
    do{
    ocupado=0;
    printf("\nEscolha uma fileira<de A a J>:");
    fflush(stdin);
    scanf("%c",&fileira);
    fileira=fileira-65;
    printf("\nEscolha um assento de Fileira:<de 1 a 20>:");
    scanf("%d",&assento);
    assento=assento-1;
    if(mapadelugares[fileira][assento]==1)
    {
        ocupado=1;
    }
    }while((fileira<0&&fileira>9||assento<0&&fileira>21)&&ocupado==0);
    mapadelugares[fileira][assento]=1;

    printf("Reserva feita com sucesso!\nIngresso\n--------------------------\nNome da peça: O Fantasma da Opera\nHorario:5a-19h\nLugar:%c%d",fileira+65,assento+1);

    printf("\n\nNova reserva?(S/N):");
    fflush(stdin);
    scanf("%c",&escolha);

    }while(escolha!='N'||escolha!='n');

    system("pause");
    return 0;
}
