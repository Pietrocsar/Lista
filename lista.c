//Questão 25
#include <stdio.h>

int main() {
  float fahrenheit, celsius;
  printf("Qual valor em graus fahrenheit voocê deseja converter para graus Celsius?\n");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("O valor em graus Celsius é: %.2f\n", celsius);
  return 0;
}

//Questão 27
#include <stdio.h>

int main() {
  float preco = 0.0, inflacao = 0.0;
printf("Qual o preço do produto?\n");
  scanf("%f", &preco);
  if (preco<100){
    inflacao = ((preco * 0.1) + preco);
  printf("O preço do produto inflacionado é: %.2f\n", inflacao);
    }
  if(preco>=100){
    inflacao = ((preco * 0.2) + preco);
    printf("O preço do produto inflacionado é: %.2f\n", inflacao);

  }
}

//Questão 34
#include <stdio.h>

int main() {
    int age, number;
    char name[50], address[150];

    printf("What is your name?\n");
    scanf("%s", name);

    printf("What is your address?\n");
    scanf("%s", address);

    printf("What is your age?\n");
    scanf("%d", &age);

    printf("What is your number?\n");
    scanf("%d", &number);

    printf("Your name is %s, you are %d years old, live at %s, and your number is %d.\n",
           name, age, address, number);

    return 0;
}

//Questão 28
#include <stdio.h>

int main() {
    float total, valorPrestacao;
    int opcao;

    printf("Qual foi o total gasto na loja?\n");
    scanf("%f", &total);

    printf("\nEscolha uma forma de pagamento:\n");
    printf("1 - À vista com 10%% de desconto\n");
    printf("2 - Em 2 vezes (preço normal sem juros)\n");
    printf("3 - Em 3 vezes com 10%% de juros\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            total = total * 0.9;
            printf("\nVocê escolheu pagar à vista com desconto.\n");
            printf("O valor final a pagar é: R$ %.2f\n", total);
            break;
        case 2:
            valorPrestacao = total / 2;
            printf("\nVocê escolheu pagar em 2 vezes.\n");
            printf("Serão 2 parcelas de R$ %.2f\n", valorPrestacao);
            break;
        case 3:
            total = total * 1.10;
            valorPrestacao = total / 3;
            printf("\nVocê escolheu pagar em 3 vezes com juros.\n");
            printf("O valor total com juros é: R$ %.2f\n", total);
            printf("Serão 3 parcelas de R$ %.2f\n", valorPrestacao);
            break;
        default:
            printf("\nOpção inválida. Por favor, tente novamente.\n");
    }

    return 0;
}
