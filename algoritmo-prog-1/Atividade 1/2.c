/*O valor de y como função de x, segundo a função y(x) = 3x + 1, num domínio real. O
valor de x deve ser solicitado ao usuário. O valor de y deve ser apresentado na tela da
seguinte forma: O valor de ‘y’ para ‘x’ igual a ? é: ?.
*/

#include <stdio.h>
int main()
{
    float x,y;
    printf("Digite o valor de x: ");
    scanf("%f",&x);
    y = 3*(x)+1;
    printf("O valor de 'y' para 'x' igual a %.f é = %.f\n",x,y);
    system("pause");
    return 0;
}