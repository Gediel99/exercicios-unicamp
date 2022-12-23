/*É possível implementar o exercício 1 utilizando switch ()? Justifique a sua resposta.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1=0, x2=0, x3=0;
    int op=0;
    printf("Digite o coeficiente a:\n");
    scanf("%f",&a);
    printf("Digite o coeficiente b:\n");
    scanf("%f",&b);
    printf("Digite o coeficiente c:\n");
    scanf("%f",&c);
    delta=((b)*(b))-4*a*c;
    if (delta>0){
        op=1;
    }
    else{
        if (delta==0){
            op=2;
        }
        else{
            op=3;
        }
    }
    switch(op) {
        case 1:
            x1=(-(b)+(sqrt(delta)))/2*a;
            x2=(-(b)-(sqrt(delta)))/2*a;
            printf("\nA equa%c%co tem duas raizes reais diferentes = %.f e %.f.\n",135,198,x1,x2);
            break;
        case 2:
            x3=(-(b)/(2*a));
            printf("\nA equação tem duas raizes reais e iguais a = %.2f.\n",135,198,x3);
            break;
        case 3:
            printf("A equa%c%co n%co tem raizes reais.\n",135,198,198);
            break;
    }
    return 0;
}