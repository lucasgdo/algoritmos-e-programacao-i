#include <math.h>
#include <stdio.h>

void lista1questao01();
void lista1questao02();
void lista1questao03();
void lista1questao04();
void lista1questao05();
void lista1questao06();
void lista1questao07();
void lista1questao08();
void lista1questao09();
void lista1questao10();
void lista1questao11();
void lista1questao12();
void lista1questao13();
void lista1questao14();
void lista1questao15();
void lista1questao16();
void lista1questao17();
void lista1questao18();
void lista1questao19();
void lista1questao20();
void lista1questao21();
void lista1questao22();
void lista1questao23();
void lista1questao24();
void lista1questao25();
void lista1questao26();
void lista1questao27();
void lista1questao28();
void lista1questao29();
void lista1questao30();
void lista1questao31();
void lista1questao32();
void lista1questao33();
void lista1questao34();
void lista1questao35();
void lista1questao36();
void lista1questao37();
void lista1questao38();
void lista1questao39();
void lista1questao40();
void lista1questao41();
void lista1questao42();
void lista1questao43();
void lista1questao44();
void lista1questao45();
void lista1questao46();
void lista1questao47();
void lista1questao48();
void lista1questao49();
void lista1questao50();
void lista1questao51();
void lista1questao52();
void lista1questao53();

void lista1questao01() {
  int numero;
  printf("Escreva um número inteiro: ");
  scanf("%d", &numero);
  printf("Esse é o número inteiro que você escreveu: %d\n", numero);
}

void lista1questao02() {
  float numero;
  printf("Escreva um número real: ");
  scanf("%f", &numero);
  printf("Esse é o número real que você escreveu: %g\n", numero);
}

void lista1questao03() {
  int numero, numero2, numero3;
  char ch;
  printf("Escreva três números inteiros separados por vírgula: ");
  scanf("%d%c%d%c%d", &numero, &ch, &numero2, &ch, &numero3);
  printf("Essa é a soma dos números que você escreveu: %d\n",
         numero + numero2 + numero3);
}

void lista1questao04() {
  float numero;
  printf("Escreva um número real: ");
  scanf("%f", &numero);
  printf("Esse é o quadrado do número real que você escreveu: %g\n",
         numero * numero);
}

void lista1questao05() {
  float numero;
  printf("Escreva um número real: ");
  scanf("%f", &numero);
  printf("Essa é a quinta parte do número real que você escreveu: %g\n",
         numero / 5);
}

void lista1questao06() {
  float temperatura;
  printf("Escreva uma temperatura em graus celsius: ");
  scanf("%f", &temperatura);
  printf("Essa é temperatura que você escreveu em fahrenheit: %g °F\n",
         (temperatura * 9 / 5) + 32);
}

void lista1questao07() {
  float temperatura;
  printf("Escreva uma temperatura em graus fahrenheit: ");
  scanf("%f", &temperatura);
  printf("Essa é temperatura que você escreveu em celsius: %g °C\n",
         5 * (temperatura - 32) / 9);
}

void lista1questao08() {
  float temperatura;
  printf("Escreva uma temperatura em graus kelvin: ");
  scanf("%f", &temperatura);
  printf("Essa é temperatura que você escreveu em celsius: %g °C\n",
         temperatura - 273.15);
}

void lista1questao09() {
  float temperatura;
  printf("Escreva uma temperatura em graus celsius: ");
  scanf("%f", &temperatura);
  printf("Essa é temperatura que você escreveu em kelvin: %g °C\n",
         temperatura + 273.15);
}

void lista1questao10() {
  float velocidade;
  printf("Escreva uma velocidade em km/h: ");
  scanf("%f", &velocidade);
  printf("Essa é a velocidade que você escreveu em m/s: %g m/s\n",
         velocidade / 3.6);
}

void lista1questao11() {
  float velocidade;
  printf("Escreva uma velocidade em m/s: ");
  scanf("%f", &velocidade);
  printf("Essa é a velocidade que você escreveu em km/h: %g km/h\n",
         velocidade * 3.6);
}

void lista1questao12() {
  float distancia;
  printf("Escreva uma distância em milhas: ");
  scanf("%f", &distancia);
  printf("Essa é a distância que você escreveu em quilômetros: %g km\n",
         distancia * 1.60934);
}

void lista1questao13() {
  float distancia;
  printf("Escreva uma distância em quilômetros: ");
  scanf("%f", &distancia);
  printf("Essa é a distância que você escreveu em milhas: %g milhas\n",
         distancia / 1.60934);
}

void lista1questao14() {
  float angulo;
  printf("Escreva um ângulo em graus: ");
  scanf("%f", &angulo);
  printf("Esse é o ângulo que você escreveu em radianos: %g rad\n",
         angulo * 3.14 / 180);
}

void lista1questao15() {
  float angulo;
  printf("Escreva um ângulo em radianos: ");
  scanf("%f", &angulo);
  printf("Esse é o ângulo que você escreveu em graus: %g °\n",
         angulo * 180 / 3.14);
}

void lista1questao16() {
  float comprimento;
  printf("Escreva um comprimento em polegadas: ");
  scanf("%f", &comprimento);
  printf("Esse é o comprimento que você escreveu em centímetros: %g cm\n",
         comprimento * 2.54);
}

void lista1questao17() {
  float comprimento;
  printf("Escreva um comprimento em centímetros: ");
  scanf("%f", &comprimento);
  printf("Esse é o comprimento que você escreveu em polegadas: %g cm\n",
         comprimento / 2.54);
}

void lista1questao18() {
  float volume;
  printf("Escreva um volume em metros cúbicos: ");
  scanf("%f", &volume);
  printf("Esse é o volume que você escreveu em litros: %g L\n", volume * 1000);
}

void lista1questao19() {
  float volume;
  printf("Escreva um volume em litros: ");
  scanf("%f", &volume);
  printf("Esse é o volume que você escreveu em metros cúbicos: %g m³\n",
         volume / 1000);
}

void lista1questao20() {
  float massa;
  printf("Escreva uma massa em quilogramas: ");
  scanf("%f", &massa);
  printf("Essa é a massa que você escreveu em libras: %g lb\n", massa / 0.45);
}

void lista1questao21() {
  float massa;
  printf("Escreva uma massa em libras: ");
  scanf("%f", &massa);
  printf("Essa é a massa que você escreveu em quilogramas: %g kg\n",
         massa * 0.45);
}

void lista1questao22() {
  float comprimento;
  printf("Escreva um comprimento em jardas: ");
  scanf("%f", &comprimento);
  printf("Esse é o comprimento que você escreveu em metros: %g m\n",
         comprimento * 0.91);
}

void lista1questao23() {
  float comprimento;
  printf("Escreva um comprimento em metros: ");
  scanf("%f", &comprimento);
  printf("Esse é o comprimento que você escreveu em jardas: %g yd\n",
         comprimento / 0.91);
}

void lista1questao24() {
  float area;
  printf("Escreva uma área em metros quadrados: ");
  scanf("%f", &area);
  printf("Essa é a área que você escreveu em acres: %g ac\n", area * 0.000247);
}

void lista1questao25() {
  float area;
  printf("Escreva uma área em acres: ");
  scanf("%f", &area);
  printf("Essa é a área que você escreveu em metros quadrados: %g m²\n",
         area * 4048.58);
}

void lista1questao26() {
  float area;
  printf("Escreva uma área em metros quadrados: ");
  scanf("%f", &area);
  printf("Essa é a área que você escreveu em hectares: %g ha\n", area * 0.0001);
}

void lista1questao27() {
  float area;
  printf("Escreva uma área em hectares: ");
  scanf("%f", &area);
  printf("Essa é a área que você escreveu em metros quadrados: %g m²\n",
         area * 10000);
}

void lista1questao28() {
  float numero, numero2, numero3;
  char ch;
  printf("Escreva três valores separados por vírgula: ");
  scanf("%f%c%f%c%f", &numero, &ch, &numero2, &ch, &numero3);
  printf("Essa é a soma dos quadrados dos números que você escreveu: %g\n",
         (numero * numero) + (numero2 * numero2) + (numero3 * numero3));
}

void lista1questao29() {
  float nota, nota2, nota3, nota4;
  char ch;
  printf("Escreva quatro notas separadas por vírgula: ");
  scanf("%f%c%f%c%f%c%f", &nota, &ch, &nota2, &ch, &nota3, &ch, &nota4);
  printf("Essa é a média aritmética das notas que você escreveu: %g\n",
         (nota + nota2 + nota3 + nota4) / 4);
}

void lista1questao30() {
  float real;
  float cotacaoDolar;
  printf("Escreva um valor em reais: ");
  scanf("%f", &real);
  printf("Escreva a cotação do dólar: ");
  scanf("%f", &cotacaoDolar);
  printf("Esse é o valor que você escreveu em dólares: %.2f USD\n",
         real / cotacaoDolar);
}

void lista1questao31() {
  int numero;
  printf("Escreva um número inteiro: ");
  scanf("%d", &numero);
  printf("Esse é o antecessor do número que você escreveu: %d\nEsse é o "
         "sucessor do número que você escreveu: %d\n",
         numero - 1, numero + 1);
}

void lista1questao32() {
  int numero;
  printf("Escreva um número inteiro: ");
  scanf("%d", &numero);
  printf("Essa é a soma do sucessor do triplo do número que você escreveu com "
         "o antecessor do seu dobro: %d\n",
         ((3 * numero) + 1) + ((2 * numero) - 1));
}

void lista1questao33() {
  float lado;
  printf("Escreva o tamanho do lado de um quadrado: ");
  scanf("%f", &lado);
  printf("Essa é a área do quadrado: %g\n", lado * lado);
}

void lista1questao34() {
  float raio;
  printf("Escreva o valor do raio de um círculo: ");
  scanf("%f", &raio);
  printf("Essa é a área do círculo: %g\n", 3.141592 * raio * raio);
}

void lista1questao35() {
  float cateto, cateto2;
  char ch;
  printf("Escreva dois catetos de um triângulo separados por vírgula: ");
  scanf("%f%c%f", &cateto, &ch, &cateto2);
  printf("Essa é a hipotenusa do triângulo: %g\n",
         sqrt(cateto * cateto + cateto2 * cateto2));
}

void lista1questao36() {
  float altura, raio;
  char ch;
  printf("Escreva a altura e o raio de um cilindro circular separados por "
         "vírgula: ");
  scanf("%f%c%f", &altura, &ch, &raio);
  printf("Esse é o volume do cilindro: %g\n", 3.141592 * raio * raio * altura);
}

void lista1questao37() {
  float valor;
  printf("Escreva o valor de um produto: ");
  scanf("%f", &valor);
  printf("Esse é o valor do produto com desconto de 12%%: %g\n",
         valor * 80 / 100);
}

void lista1questao38() {
  float salario;
  printf("Escreva o salário de um funcionário: ");
  scanf("%f", &salario);
  printf("Esse é o valor do salário com um aumento de 25%%: %g\n",
         salario * 125 / 100);
}

void lista1questao39() {
  printf("A quantia ganha pelo primeiro ganhador será de: %d (46%%)\n",
         780000 * 46 / 100);
  printf("A quantia ganha pelo segundo ganhador será de: %d (32%%)\n",
         780000 * 32 / 100);
  printf("A quantia ganha pelo terceiro ganhador será de: %d (22%%)\n",
         780000 * 22 / 100);
}

void lista1questao40() {
  int dias;
  printf("Escreva o número de dias trabalhados pelo encanador: ");
  scanf("%d", &dias);
  printf("Essa é a quantia líquida recebida pelo encanador: %d R$\n",
         (dias * 30) * 92 / 100);
}

void lista1questao41() {
  float valor;
  int horas;
  printf("Escreva o valor da hora de trabalho: ");
  scanf("%f", &valor);
  printf("Escreva o número de horas trabalhadas no mês: ");
  scanf("%d", &horas);
  printf("Esse é o valor a ser pago ao funcionário, adicionando 10%%: %g R$\n ",
         (valor * horas) * 110 / 100);
}

void lista1questao42() {
  float salario;
  printf("Escreva o valor do salário-base de um funcionário: ");
  scanf("%f", &salario);
  printf("Esse é o salário a receber pelo funcionário: %g R$\n",
         (salario * 93 / 100) + (salario * 5 / 100));
}

void lista1questao43() {
  float valor;
  printf("Escreva o valor total: ");
  scanf("%f", &valor);
  printf("Esse é o valor total a pagar com desconto de 10%%: %g R$\n",
         valor * 90 / 100);
  printf("Esse é o valor de cada parcela, no parcelamento de 3x sem juros: %g "
         "R$\n",
         valor * 3);
  printf(
      "Essa é a comissão do vendedor, no caso da venda ser a vista: %g R$\n ",
      (valor * 90 / 100) * 5 / 100);
  printf(
      "Essa é a comissão do vendedor, no caso da venda ser parcelada: %g R$\n",
      valor * 5 / 100);
}

void lista1questao44() {
  float alturaEscada, alturaDesejada;
  printf("Escreva a altura do degrau de uma escada: ");
  scanf("%f", &alturaEscada);
  printf("Escreva a altura desejada: ");
  scanf("%f", &alturaDesejada);
  printf("Esse é o número de degraus que você deverá subir para atingir seu "
         "objetivo: %d\n",
         (int)ceil(alturaDesejada / alturaEscada));
}

void lista1questao45() {
  fflush(stdin);
  char letra;
  printf("Escreva uma letra maiúscula: ");
  scanf("%c", &letra);
  printf("Essa é a letra que você escreveu minúscula: %c\n", letra + 32);
}

void lista1questao46() {
  int numero, restante, reverso = 0;
  printf("Escreva um número inteiro positivo de três dígitos: ");
  scanf("%d", &numero);
  restante = numero % 10;
  reverso = reverso * 10 + restante;
  numero = numero / 10;
  restante = numero % 10;
  reverso = reverso * 10 + restante;
  numero = numero / 10;
  restante = numero % 10;
  reverso = reverso * 10 + restante;
  printf("O número invertido é: %d\n", reverso);
}

void lista1questao47() {
  int numero, primeiroDigito, segundoDigito, terceiroDigito, quartoDigito;
  printf("Escreva um número inteiro de 4 dígitos: ");
  scanf("%d", &numero);
  primeiroDigito = numero / 1000;
  segundoDigito = (numero - (primeiroDigito * 1000)) / 100;
  terceiroDigito =
      (numero - (primeiroDigito * 1000) - (segundoDigito * 100)) / 10;
  quartoDigito = (numero - (primeiroDigito * 1000) - (segundoDigito * 100) -
                  (terceiroDigito * 10));
  printf("Esse é o número, um dígito por linha:\n%d\n%d\n%d\n%d\n",
         primeiroDigito, segundoDigito, terceiroDigito, quartoDigito);
}

void lista1questao48() {
  int segundos;
  printf("Escreva um valor em segundos: ");
  scanf("%d", &segundos);
  printf("Esse é o valor em horas, minutos e segundos: %d horas, %d minutos e "
         "%d segundos\n",
         (segundos / 3600), (segundos - (3600 * (segundos / 3600))) / 60,
         (segundos - (3600 * (segundos / 3600)) -
          ((segundos - (3600 * (segundos / 3600))) / 60 * 60)));
}

void lista1questao49() {
  int horasInicio, minutosInicio, segundosInicio, duracaoSegundos;
  char ch;
  printf(
      "Escreva o horário de início de uma experiência biológica (HH:MM:SS): ");
  scanf("%d%c%d%c%d", &horasInicio, &ch, &minutosInicio, &ch, &segundosInicio);
  printf("Escreva a duração em segundos dessa experiência: ");
  scanf("%d", &duracaoSegundos);
  duracaoSegundos +=
      (horasInicio * 3600) + (minutosInicio * 60) + segundosInicio;
  printf("O horário do término dessa experiência é: %d:%d:%d\n",
         (duracaoSegundos / 3600),
         (duracaoSegundos - (3600 * (duracaoSegundos / 3600))) / 60,
         (duracaoSegundos - (3600 * (duracaoSegundos / 3600)) -
          ((duracaoSegundos - (3600 * (duracaoSegundos / 3600))) / 60 * 60)));
}

void lista1questao50() {
  int idade, ano;
  printf("Escreva a sua idade: ");
  scanf("%d", &idade);
  printf("Escreva o ano atual: ");
  scanf("%d", &ano);
  printf("Esse é o ano do seu nascimento: %d\n", ano - idade);
}

void lista1questao51() {
  int coordenadaX, coordenadaY;
  char ch;
  printf(
      "Escreva as coordenadas x e y de pontos no R² separadas por vírgula: ");
  scanf("%d%c%d", &coordenadaX, &ch, &coordenadaY);
  printf("Essa é a distância do ponto para a origem (0,0): %g\n",
         sqrt(coordenadaX * coordenadaX + coordenadaY * coordenadaY));
}

void lista1questao52() {
  float valor, valor2, valor3, valorPremio, valorAposta, porcentagem,
      porcentagem2, porcentagem3;
  char ch;
  printf("Escreva o valor que os três apostadores investiram, separados por "
         "vírgula: ");
  scanf("%f%c%f%c%f", &valor, &ch, &valor2, &ch, &valor3);
  printf("Escreva o valor do prêmio: ");
  scanf("%f", &valorPremio);
  valorAposta = valor + valor2 + valor3;
  porcentagem = valor / valorAposta;
  porcentagem2 = valor2 / valorAposta;
  porcentagem3 = valor3 / valorAposta;

  printf("O valor que cada um dos apostadores irá ganhar, respectivamente, "
         "será de: %g R$, %g R$ e %g R$\n",
         valorPremio * porcentagem, valorPremio * porcentagem2,
         valorPremio * porcentagem3);
}

void lista1questao53() {
  float comprimento, largura, precoMetro;
  char ch;
  printf("Escreva as dimensões de um terreno (comprimento c e largura l), "
         "separadas por vírgula: ");
  scanf("%f%c%f", &comprimento, &ch, &largura);
  printf("Escreva o preço do metro: ");
  scanf("%f", &precoMetro);
  printf("O custo para cercar este terreno com tela é de: %g R$\n",
         ((2 * comprimento) + (2 * largura)) * precoMetro);
}