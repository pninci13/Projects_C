#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Fahrenheit=30;
    float Celsius;

    printf("\n\n\tFahrenheit\tCelsius\n___________");
    while(Fahrenheit<=50)
    {
        Celsius=(Fahrenheit-32)*5/9;
        printf("\n\t%d\t\t %.2f",Fahrenheit,Celsius);
       Fahrenheit = Fahrenheit+2;

    }
    printf("\n");
    system("pause");
    return 0;
}
