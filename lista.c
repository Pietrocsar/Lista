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
