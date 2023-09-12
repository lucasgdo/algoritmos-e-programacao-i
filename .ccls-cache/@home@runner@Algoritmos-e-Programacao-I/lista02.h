#include <math.h>
#include <stdio.h>

void lista2questao01();
void lista2questao02();
void lista2questao03();
void lista2questao04();
void lista2questao05();
void lista2questao06();

void lista2questao01() {
  fflush(stdin);
  float numero1, numero2;
  char operador, ch;
  printf(
      "Escreva uma operação matemática (+,-,/ ou *) com dois números reais: ");
  scanf("%f%c%f", &numero1, &operador, &numero2);
  printf("O resultado de %g%c%g é: ", numero1, operador, numero2);
  switch (operador) {
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
void lista2questao02() {
  
}
void lista2questao03() {}
void lista2questao04() {}
void lista2questao05() {}
void lista2questao06() {}