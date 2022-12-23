/* Utilizando a estrutura de condição if (), escreva um programa que solicite ao usuário
os coeficientes a, b e c de uma equação do 2º grau. Calcule o delta e as raízes da
equação.
• Se delta > 0, apresente na tela: “A equação tem duas raízes reais diferentes = ? e ?”.
• Se delta = 0, apresente na tela : “A equação tem duas raízes reais e iguais a = ?”.
• Se delta < 0, apresente na tela : “A equação não tem raízes reais”.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1=0, x2=0, x3=0;
    printf("Digite os coeficentes a, b e c, respectivamente, utilizando espa%co ou enter entre eles:\n", 135);
    scanf("%f %f %f",&a,&b,&c);
    delta=((b)*(b))-4*a*c;
    if (delta>0){
        x1=(-(b)+(sqrt(delta)))/2*a;
        x2=(-(b)-(sqrt(delta)))/2*a;
        printf("A equa%c%co tem duas raizes reais diferentes = %.f e %.f.\n",135,198,x1,x2);
    }
    if (delta==0){
        x3=(-(b)/(2*a));
        printf("A equação tem duas raizes reais e iguais a = %.2f.\n",135,198,x3);
    }
    if (delta<0){
        printf("A equa%c%co n%co tem raizes reais.\n",135,198,198);
    }
    system("pause");
    return 0;
}