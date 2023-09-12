#include <stdio.h>

int main() {
  int numeros_impares[10];
  for (int i = 0; i < sizeof(numeros_impares) / sizeof(numeros_impares[0]);
       i++) {
    if (i % 2 == 0) {
      numeros_impares[i] = i - 1;
    } else {
      numeros_impares[i] = i;
    }
    printf("%d ", numeros_impares[i]);
  }
  return 0;
}