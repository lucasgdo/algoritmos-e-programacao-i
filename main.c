#include "lista01.h"
#include "lista02.h"
#include "lista03.h"
#include <math.h>
#include <stdio.h>

int main() {
  int lista, questao;
  do {
    printf("Escolha a lista (1-3) (0 para encerrar): ");
    scanf("%d", &lista);
    switch (lista) {
    case 1:
      printf("Escolha a questão (1-53) (0 para encerrar): ");
      scanf("%d", &questao);
      switch (questao) {
      case 1:
        printf("1. Faça um programa que leia um número inteiro e o imprima.\n");
        lista1questao01();
        break;
      case 2:
        printf("2. Faça um programa que leia um número real e o imprima.\n");
        lista1questao02();
        break;
      case 3:
        printf("3. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.\n");
        lista1questao03();
        break;
      case 4:
        printf("4. Leia um número real e imprima o resultado do quadrado desse número.\n");
        lista1questao04();
        break;
      case 5:
        printf("5. Leia um número real e imprima a quinta parte deste número.\n");
        lista1questao05();
        break;
      case 6:
        printf("6. Leia uma tempereatura em graus Celsius e apresente-a convertida em graus Fahrenheit.\n");
        lista1questao06();
        break;
      case 7:
        printf("7. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.\n");
        lista1questao07();
        break;
      case 8:
        printf("8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.\n");
        lista1questao08();
        break;
      case 9:
        printf("9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.\n");
        lista1questao09();
        break;
      case 10:
        printf("10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros por segundo).\n");
        lista1questao10();
        break;
      case 11:
        printf("11. Leia uma velocidade em m/s e apresente-a convertida em km/h.\n");
        lista1questao11();
        break;
      case 12:
        printf("12. Leia uma distância em milhas e apresente-a convertida em quilômetros.\n");
        lista1questao12();
        break;
      case 13:
        printf("13. Leia uma distância em quilômetros e apresente-a convertida em milhas.\n");
        lista1questao13();
        break;
      case 14:
        printf("14. Leia um ângulo em graus e apresente-o convertido em radianos.\n");
        lista1questao14();
        break;
      case 15:
        printf("15. Leia um ângulo em radianos e apresente-o convertido em graus.\n");
        lista1questao15();
        break;
      case 16:
        printf("16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.\n");
        lista1questao16();
        break;
      case 17:
        printf("17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.\n");
        lista1questao17();
        break;
      case 18:
        printf("18. Leia um valor de volume em metros cúbicos e apresente-o convertido em litros.\n");
        lista1questao18();
        break;
      case 19:
        printf("19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos.\n");
        lista1questao19();
        break;
      case 20:
        printf("20. Leia um valor de massa em quilogramas e apresente-o convertido em libras.\n");
        lista1questao20();
        break;
      case 21:
        printf("21. Leia um valor de massa em libras e apresente-o convertido em quilogramas.\n");
        lista1questao21();
        break;
      case 22:
        printf("22. Leia um valor de comprimento em jardas e apresente-o convertido em metros.\n");
        lista1questao22();
        break;
      case 23:
        printf("23. Leia um valor de comprimento em metros e apresente-o convertido em jardas.\n");
        lista1questao23();
        break;
      case 24:
        printf("24. Leia um valor de área em metros quadrados e apresente-o convertido em acres.\n");
        lista1questao24();
        break;
      case 25:
        printf("25. Leia um valor de área em acres e apresente-o convertido em metros quadrados.\n");
        lista1questao25();
        break;
      case 26:
        printf("26. Leia um valor de área em metros quadrados e apresente-o convertido em hectares.\n");
        lista1questao26();
        break;
      case 27:
        printf("27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados.\n");
        lista1questao27();
        break;
      case 28:
        printf("28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.\n");
        lista1questao28();
        break;
      case 29:
        printf("29. Leia quatro notas, calcule a média aritmética e imprima o resultado.\n");
        lista1questao29();
        break;
      case 30:
        printf("30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.\n");
        lista1questao30();
        break;
      case 31:
        printf("31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.\n");
        lista1questao31();
        break;
      case 32:
        printf("32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.\n");
        lista1questao32();
        break;
      case 33:
        printf("Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.\n");
        lista1questao33();
        break;
      case 34:
        printf("\n");
        lista1questao34();
        break;
      case 35:
        printf("\n");
        lista1questao35();
        break;
      case 36:
        printf("\n");
        lista1questao36();
        break;
      case 37:
        printf("\n");
        lista1questao37();
        break;
      case 38:
        printf("\n");
        lista1questao38();
        break;
      case 39:
        printf("\n");
        lista1questao39();
        break;
      case 40:
        printf("\n");
        lista1questao40();
        break;
      case 41:
        printf("\n");
        lista1questao41();
        break;
      case 42:
        printf("\n");
        lista1questao42();
        break;
      case 43:
        printf("\n");
        lista1questao43();
        break;
      case 44:
        printf("\n");
        lista1questao44();
        break;
      case 45:
        printf("\n");
        lista1questao45();
        break;
      case 46:
        printf("\n");
        lista1questao46();
        break;
      case 47:
        printf("\n");
        lista1questao47();
        break;
      case 48:
        printf("\n");
        lista1questao48();
        break;
      case 49:
        printf("\n");
        lista1questao49();
        break;
      case 50:
        printf("\n");
        lista1questao50();
        break;
      case 51:
        printf("\n");
        lista1questao51();
        break;
      case 52:
        printf("\n");
        lista1questao52();
        break;
      case 53:
        printf("\n");
        lista1questao53();
        break;
      default:
        break;
      }
      break;
    case 2:
      printf("Escolha a questão (1-6) (0 para encerrar): ");
      scanf("%d", &questao);
      switch (questao) {
      case 1:
        lista2questao01();
        break;
      case 2:
        lista2questao02();
        break;
      case 3:
        lista2questao03();
        break;
      case 4:
        lista2questao04();
        break;
      case 5:
        lista2questao05();
        break;
      case 6:
        lista2questao06();
        break;
      default:
        break;
      }
      break;
    case 3:
      printf("Escolha a questão (1-12) (0 para encerrar): ");
      scanf("%d", &questao);
      switch (questao) {
      case 1:
        lista3questao01();
        break;
      case 2:
        lista3questao02();
        break;
      case 3:
        lista3questao03();
        break;
      case 4:
        lista3questao04();
        break;
      case 5:
        lista3questao05();
        break;
      case 6:
        lista3questao06();
        break;
      case 7:
        lista3questao07();
        break;
      case 8:
        lista3questao08();
        break;
      case 9:
        lista3questao09();
        break;
      case 10:
        lista3questao10();
        break;
      case 11:
        lista3questao11();
        break;
      case 12:
        lista3questao12();
        break;
      default:
        break;
      }
      break;
    default:
      break;
    }

  } while (lista > 0 && questao > 0);
}