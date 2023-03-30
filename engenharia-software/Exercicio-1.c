/*
Desafio 1: Conta de Água
"Extraído da Olimpíada Brasileira de Informática 2010.""
A empresa local de abastecimento de água, a Saneamento Básico da Cidade (SBC), está promovendo uma campanha 
de conservação de água, distribuindo cartilhas e promovendo ações demonstrando a importância da água para a 
vida e para o meio ambiente. Para incentivar mais ainda a economia de água, a  SBC alterou os preços de seu
fornecimento de forma que,  proporcionalmente, aqueles clientes que consumirem menos água paguem menos pelo 
metro cúbico. Todo cliente paga mensalmente uma assinatura de R$ 7, que inclui uma  franquia de 10 m3 de á-
gua. Isto é, para qualquer consumo entre 0 e 10 m3, o consumidor  paga a mesma quantia de R$ 7 reais  (note
que o valor da assinatura deve ser pago mesmo que o consumidor  não tenha consumido  água). Acima de 10 m3, 
cada metro cúbico subseqüente tem um valor diferente, dependendo da faixa de consumo. A SBC cobra apenas por
quantidades inteiras de metros cúbicos consumidos. A tabela abaixo especifica o preço por metro cúbico para
cada faixa de consumo:
 _____________________________________________
| Faixa de consumo (m3)|    Preço (por m3)    |
|______________________|______________________|
|até 10                | incluído na franquia |
|de 11 a 30            | R$ 1,00              |
|de 31 a 100           | R$ 2,00              |
|de 101 em diante      | R$ 5,00              |
|______________________|______________________|

Assim, por exemplo, se o consumo foi de 120 m3, o valor da conta é:
• 7 reais da assinatura básica;
• 20 reais pelo consumo no intervalo 11 – 30 m3;
• 140 reais pelo consumo no intervalo 31 – 100 m3;
• 100 reais pelo consumo no intervalo 101 – 120 m3.
Logo o valor total da conta de água é R$ 267,00.
Tarefa
Escreva um programa que, dado o consumo de uma residência em m3, calcula o valor da conta de água daquela re-
sidência.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int consumo = 0, valorConta = 0, continuar = 1;
    while(continuar == 1){
        printf("--------------------------------------------\n");
        printf ("Digite o valor do consumo de sua residencia: ");
        scanf("%d", &consumo);
        if (consumo <= 10){
            printf("O valor a ser pago sera de %d\n",7);
        } else if (consumo <= 30){
            printf("O valor a ser pago sera de %d reias\n",(consumo-10)*1+7);
        } else if (consumo <= 100){
            printf("O valor a ser pago sera de %d reias\n",(consumo-30)*2+27);
        } else if (consumo > 100){
            printf("O valor a ser pago sera de %d reias\n",(consumo-100)*5+167);
        };
        printf("--------------------------------------------\n");
        printf("Quer continuar? \nSim - Digite 1\nNao - Digite 0\n ");
        scanf("%d",&continuar);
    
        while(continuar != 1 && continuar != 0){
            printf("--------------------------------------------\n");
            printf("Escolha incorreta, tente novamente!\nQuer continuar? \nSim - Digite 1\nNao - Digite 0\n");
            scanf("%d",&continuar);
        }
    };
    return 0; 
};