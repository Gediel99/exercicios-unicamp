/*O equivalente em Fahrenheit (F) para uma temperatura dada na escala Celsius (C).
Fórmula de conversão: F = 9/5 * C + 32. A temperatura em Celsius deve ser solicitada ao
usuário. O equivalente em Fahrenheit deve ser apresentado na tela da seguinte forma: Celsius
= ? equivale a Fahrenheit = ?.*/

#include <stdio.h>
int main()
{
    float Cel, Fah;
    printf("Digite a temperatura em graus: ");
    scanf("%f",&Cel);
    Fah = (9*Cel/5)+32;
    printf("Celsius = %.f %cC equivale a Fahrenheint = %.f %cF\n", Cel, 248,
    Fah,248);
    system("pause");
    return 0;
}
