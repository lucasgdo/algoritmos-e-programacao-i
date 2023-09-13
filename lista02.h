#include <math.h>
#include <stdio.h>

void lista2questao01();
void lista2questao02();
void lista2questao03();
void lista2questao04();
void lista2questao05();
void lista2questao06();

void lista2questao01()
{
  fflush(stdin);
  float numero1, numero2;
  char operador, ch;
  printf(
      "Escreva uma operação matemática (+,-,/ ou *) com dois números reais: ");
  scanf("%f%c%f", &numero1, &operador, &numero2);
  printf("O resultado de %g%c%g é: ", numero1, operador, numero2);
  switch (operador)
  {
  case '+':
    printf("%g\n", numero1 + numero2);
    break;
  case '-':
    printf("%g\n", numero1 - numero2);
    break;
  case '/':
    printf("%g\n", numero1 / numero2);
    break;
  case '*':
    printf("%g\n", numero1 * numero2);
    break;
  default:
    break;
  }
}

void lista2questao02()
{
  int entrada, valorFinal = 0;
  while (entrada >= 0)
  {
    printf("Digite um valor inteiro positivo (Valor negativo para encerrar): ");
    scanf("%d", &entrada);
    if (entrada < 0)
    {
      break;
    }
    else
    {
      valorFinal += entrada;
    }
  }
  printf("A soma de todos os valores é: %d\n", valorFinal);
}

void lista2questao03()
{
  for (int i = 1000; i < 2000; i++)
  {
    if (i % 11 == 0 || i % 11 == 5)
    {
      printf("%d ", i);
    }
  }
  printf("\n");
}

void lista2questao04()
{
  int entrada = 1;
  int media, contador;
  while (entrada != 0)
  {
    printf("Digite um valor inteiro positivo (0 para encerrar): ");
    scanf("%d", &entrada);
    if (entrada == 0)
    {
      break;
    }
    else if (entrada % 2 == 0)
    {
      contador++;
      media += entrada;
    }
  }
  media = media / contador;
  printf("A média dos valores pares é: %d\n", media);
}

void lista2questao05()
{
  float lado1, lado2, lado3;
  char ch;
  printf("Digite os três lados de um triângulo, separados por vírgula: ");
  scanf("%f%c%f%c%f", &lado1, &ch, &lado2, &ch, &lado3);
  if (lado1 > lado2 + lado3 || lado2 > lado1 + lado3 || lado3 > lado1 + lado2)
  {
    printf("Um triângulo de lados %g, %g e %g não é um triângulo.\n", lado1, lado2, lado3);
  }
  else if (lado1 == lado2 && lado2 == lado3)
  {
    printf("Um triângulo de lados %g, %g e %g é um triângulo equilátero.\n", lado1, lado2, lado3);
  }
  else if (lado1 == lado2 || lado2 == lado3)
  {
    printf("Um triângulo de lados %g, %g e %g é um triângulo isósceles.\n", lado1, lado2, lado3);
  }
  else
  {
    printf("Um triângulo de lados %g, %g e %g é um triângulo escaleno.\n", lado1, lado2, lado3);
  }
}

void lista2questao06()
{
  int horasTrabalhadas;
  float valorHora, horasExtra;
  char ch;
  printf("Digite o número de horas trabalhadas na semana(h) e o valor da hora em reais(XX.XXR$), separados por vírgula: ");
  scanf("%d%c%f", &horasTrabalhadas, &ch, &valorHora);
  if (horasTrabalhadas <= 40)
  {
    printf("O salário semanal é de: %g R$\n", horasTrabalhadas * valorHora);
  }
  else if (horasTrabalhadas > 40 && horasTrabalhadas < 60)
  {
    horasExtra = horasTrabalhadas - 40;
    printf("O salário semanal é de: %g R$\n", (horasTrabalhadas - horasExtra) * valorHora + horasExtra * valorHora * 1.5);
  }
  else if (horasTrabalhadas > 60)
  {
    horasExtra = horasTrabalhadas - 60;
    printf("O salário semanal é de: %g R$\n", 40 * valorHora + 20 * valorHora * 1.5 + horasExtra * valorHora * 2);
  }
}