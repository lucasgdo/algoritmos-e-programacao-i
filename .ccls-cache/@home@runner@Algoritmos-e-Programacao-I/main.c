#include "lista01.h"
#include "lista02.h"
#include <math.h>
#include <stdio.h>

int main() {
  int lista, questao;
  do {
    printf("Escolha a lista (1-2) (Valor negativo para encerrar): ");
    scanf("%d", &lista);
    switch (lista) {
    case 1:
      printf("Escolha a questão (1-53): ");
      scanf("%d", &questao);
      switch (questao) {
      case 1:
        lista1questao01();
        break;
      case 2:
        lista1questao02();
        break;
      case 3:
        lista1questao03();
        break;
      case 4:
        lista1questao04();
        break;
      case 5:
        lista1questao05();
        break;
      case 6:
        lista1questao06();
        break;
      case 7:
        lista1questao07();
        break;
      case 8:
        lista1questao08();
        break;
      case 9:
        lista1questao09();
        break;
      case 10:
        lista1questao10();
        break;
      case 11:
        lista1questao11();
        break;
      case 12:
        lista1questao12();
        break;
      case 13:
        lista1questao13();
        break;
      case 14:
        lista1questao14();
        break;
      case 15:
        lista1questao15();
        break;
      case 16:
        lista1questao16();
        break;
      case 17:
        lista1questao17();
        break;
      case 18:
        lista1questao18();
        break;
      case 19:
        lista1questao19();
        break;
      case 20:
        lista1questao20();
        break;
      case 21:
        lista1questao21();
        break;
      case 22:
        lista1questao22();
        break;
      case 23:
        lista1questao23();
        break;
      case 24:
        lista1questao24();
        break;
      case 25:
        lista1questao25();
        break;
      case 26:
        lista1questao26();
        break;
      case 27:
        lista1questao27();
        break;
      case 28:
        lista1questao28();
        break;
      case 29:
        lista1questao29();
        break;
      case 30:
        lista1questao30();
        break;
      case 31:
        lista1questao31();
        break;
      case 32:
        lista1questao32();
        break;
      case 33:
        lista1questao33();
        break;
      case 34:
        lista1questao34();
        break;
      case 35:
        lista1questao35();
        break;
      case 36:
        lista1questao36();
        break;
      case 37:
        lista1questao37();
        break;
      case 38:
        lista1questao38();
        break;
      case 39:
        lista1questao39();
        break;
      case 40:
        lista1questao40();
        break;
      case 41:
        lista1questao41();
        break;
      case 42:
        lista1questao42();
        break;
      case 43:
        lista1questao43();
        break;
      case 44:
        lista1questao44();
        break;
      case 45:
        lista1questao45();
        break;
      case 46:
        lista1questao46();
        break;
      case 47:
        lista1questao47();
        break;
      case 48:
        lista1questao48();
        break;
      case 49:
        lista1questao49();
        break;
      case 50:
        lista1questao50();
        break;
      case 51:
        lista1questao51();
        break;
      case 52:
        lista1questao52();
        break;
      case 53:
        lista1questao53();
        break;
      default:
        break;
      }
      break;
    case 2:
      printf("Escolha a questão (1-6): ");
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
      }
      break;
    default:
      break;
    }

  } while (lista > 0);
}