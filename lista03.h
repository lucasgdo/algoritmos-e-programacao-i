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
    float peso, altura, imc;
    char ch;
    printf("Digite o seu peso e altura, separados por vírgula: ");
    scanf("%f%c%f", &peso, &ch, &altura);
    imc = peso / (altura * altura);
    if (imc < 18.5)
    {
        printf("IMC: %g - Abaixo do peso\n", imc);
    }
    else if (imc > 18.5 && imc < 25)
    {
        printf("IMC: %g - Peso normal\n", imc);
    }
    else if (imc > 25 && imc < 30)
    {
        printf("IMC: %g - Acima do peso\n", imc);
    }
    else
    {
        printf("IMC: %g - Obeso\n", imc);
    }
}

void lista3questao11()
{
    float preco;
    int opcaoPagamento;
    char ch;
    printf("Opções de pagamento\n\
1 - À vista - 10%% de desconto\n\
2 - À vista no cartão de crédito - 15%% de desconto\n\
3 - Em duas vezes, preço normal de etiqueta sem juros\n\
4 - Em duas vezes, preço normal de etiqueta mais juros de 10%%\n\
Digite o preço normal de etiqueta e a opção de pagamento, separados por vírgula: ");
    scanf("%f%c%d", &preco, &ch, &opcaoPagamento);
    switch (opcaoPagamento)
    {
    case 1:
        preco = preco * 0.9;
        break;
    case 2:
        preco = preco * 0.85;
        break;
    case 3:
        printf("Duas parcelas de %g R$\n", preco / 2);
        break;
    case 4:
        preco = preco * 1.1;
        printf("Duas parcelas de %g R$\n", preco / 2);
        break;
    default:
        printf("Opção inválida");
        break;
    }
    printf("O valor a ser pago pelo produto é de: %g R$\n", preco);
}

void lista3questao12()
{
    int identificador;
    float nota1, nota2, nota3, mediaExercicios, mediaTotal;
    char ch, conceito, resultado[20];
    printf("Digite o número de identificação, as 3 notas obtidas nas verificações e a média dos \
exercícios, separados por vírgula: ");
    scanf("%d%c%f%c%f%c%f%c%f", &identificador, &ch, &nota1, &ch, &nota2, &ch, &nota3, &ch, &mediaExercicios);
    mediaTotal = (nota1 + nota2 * 2 + nota3 * 3 + mediaExercicios) / 7;
    if (mediaTotal >= 9)
    {
        conceito = 'A';
        strcpy(resultado, "Aprovado");
    }
    else if (mediaTotal >= 7 && mediaTotal < 9)
    {
        conceito = 'B';
        strcpy(resultado, "Aprovado");
    }
    else if (mediaTotal >= 6 && mediaTotal < 7)
    {
        conceito = 'C';
        strcpy(resultado, "Aprovado");
    }
    else if (mediaTotal >= 4 && mediaTotal < 6)
    {
        conceito = 'D';
        strcpy(resultado, "Reprovado");
    }
    else
    {
        conceito = 'E';
        strcpy(resultado, "Reprovado");
    }
    printf("Número do aluno: %d, notas: %g, %g e %g, média dos exercícios: %g, média de \
aproveitamento: %g, conceito: %c - %s\n",
           identificador, nota1, nota2, nota3, mediaExercicios, mediaTotal, conceito, resultado);
}