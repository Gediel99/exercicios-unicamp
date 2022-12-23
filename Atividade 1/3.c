/*A média aritmética de quatro números inteiros. Solicite os quatro números ao usuário com
apenas duas linhas de comando. A média deve ser apresentada na tela da seguinte forma:
Média aritmética entre ?, ?, ? e ? = ?.
*/

#include <stdio.h>

int main()
{ 
    float valor1, valor2, valor3, valor4, media;
    printf("Digite espa%cadamente quatros valores para descobrir a m%cdia entre eles = ", 135, 130);
    scanf("%f %f %f %f",&valor1, &valor2, &valor3, &valor4);
    media = ((valor1+valor2+valor3+valor4)/4);
    printf("A m%cdia aritm%ctica entre %.2f, %.2f, %.2f e %.2f = %.2f\n", 130, 130,
    valor1, valor2, valor3, valor4, media);
    system("pause");
    return 0;
}
