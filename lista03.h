#include <math.h>
#include <stdio.h>
#include <string.h>

void lista3questao01();
void lista3questao02();
void lista3questao03();
void lista3questao04();
void lista3questao05();
void lista3questao06();
void lista3questao07();
void lista3questao08();
void lista3questao09();
void lista3questao10();
void lista3questao11();
void lista3questao12();

void lista3questao01()
{
    float numero1, numero2, numero3;
    char ch;
    printf("Digite três valores (A,B,C), separados por vírgula: ");
    scanf("%f%c%f%c%f", &numero1, &ch, &numero2, &ch, &numero3);
    if (numero1 + numero2 < numero3)
    {
        printf("A soma de %g+%g(%g) é menor que %g\n", numero1, numero2, numero1 + numero2, numero3);
    }
    else if (numero1 + numero2 == numero3)
    {
        printf("A soma de %g+%g(%g) é igual a %g\n", numero1, numero2, numero1 + numero2, numero3);
    }
    else
    {
        printf("A soma de %g+%g(%g) é maior que %g\n", numero1, numero2, numero1 + numero2, numero3);
    }
}

void lista3questao02()
{
    char sexo;
    char nome[50], estadoCivil[10];
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o sexo (M,F): ");
    scanf(" %c", &sexo);
    printf("Digite o estado civil (SOLTEIRA(O),CASADA(O),SEPARADA(O),DIVORCIADA(O),VIUVA(O)): ");
    scanf("%s", estadoCivil);
    if (strcmp(estadoCivil, "CASADA") == 0 || strcmp(estadoCivil, "CASADO") == 0)
    {
        int tempoCasada;
        printf("Digite o tempo de casada(o) em anos: ");
        scanf("%d", &tempoCasada);
        printf("%s, do sexo %c, estado civil %s, tempo de casada(o): %d anos\n", nome, sexo, estadoCivil, tempoCasada);
    }
    else
    {
        printf("%s, do sexo %c, estado civil %s\n", nome, sexo, estadoCivil);
    }
}

void lista3questao03()
{
    int numero;
    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("O número %d é par\n", numero);
    }
    else
    {
        printf("O número %d é ímpar\n", numero);
    }
}

void lista3questao04()
{
    int numero1, numero2, numero3;
    char ch;
    printf("Digite dois valores inteiros, separados por vírgula: ");
    scanf("%d%c%d", &numero1, &ch, &numero2);
    if (numero1 == numero2)
    {
        numero3 = numero1 + numero2;
        printf("%d+%d=%d\n", numero1, numero2, numero3);
    }
    else
    {
        numero3 = numero1 * numero2;
        printf("%d*%d=%d\n", numero1, numero2, numero3);
    }
}

void lista3questao05()
{
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);
    if (numero > 0)
    {
        printf("%g*2=%g\n", numero, numero * 2);
    }
    else
    {
        printf("%g*3=%g\n", numero, numero * 3);
    }
}

void lista3questao06()
{
    char valor1[15];
    char valor2[15];
    int valor;
    printf("Digite um valor booleano (verdadeiro ou falso): ");
    scanf("%s", valor1);
    printf("Digite outro valor booleano (verdadeiro ou falso): ");
    scanf("%s", valor2);
    if (strcmp(valor1, valor2) == 0)
    {
        printf("Os dois valores são %ss\n", valor1);
    }
    else
    {
        printf("Os dois valores são diferentes\n");
    }
}

void lista3questao07()
{
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("%d+5=%d\n", numero, numero + 5);
    }
    else
    {
        printf("%d+8=%d\n", numero, numero + 8);
    }
}

void lista3questao08()
{
    int numeroAtual, numeros[3];
    char ch;
    printf("Digite três números inteiros diferentes, separados por vírgula: ");
    scanf("%d%c%d%c%d", &numeros[0], &ch, &numeros[1], &ch, &numeros[2]);
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i + 1; j < 3; ++j)
        {
            if (numeros[i] < numeros[j])
            {
                numeroAtual = numeros[i];

                numeros[i] = numeros[j];

                numeros[j] = numeroAtual;
            }
        }
    }
    printf("Números em ordem decrescente: ");
    for (int i = 0; i < 3; ++i)
    {
        if (i == 2)
        {
            printf("%d\n", numeros[i]);
        }
        else
        {
            printf("%d ", numeros[i]);
        }
    }
}

void lista3questao09()
{
    float altura;
    char ch, sexo;
    printf("Digite a altura em metros e o sexo (F,M), separados por vírgula: ");
    scanf("%f%c%c", &altura, &ch, &sexo);
    switch (sexo)
    {
    case 'F':
        printf("O seu peso ideal é de %gkg\n", (62.1 * altura) - 44.7);
        break;
    case 'M':
        printf("O seu peso ideal é de %gkg\n", (72.7 * altura) - 58);
        break;
    default:
        break;
    }
}

void lista3questao10()
{
}

void lista3questao11()
{
}

void lista3questao12()
{
}