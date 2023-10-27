#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void lista4questao01();
void lista4questao02();
void lista4questao03();
void lista4questao04();
void lista4questao05();
void lista4questao06();
void lista4questao07();
void lista4questao08();
void lista4questao09();
void lista4questao10();
void lista4questao11();
void lista4questao12();
void lista4questao13();
void lista4questao14();
void lista4questao15();
void lista4questao16();
void lista4questao17();
void lista4questao18();
void lista4questao19();
void lista4questao20();
void lista4questao21();
void lista4questao22();
void lista4questao23();
void lista4questao24();
void lista4questao25();
void lista4questao26();
void lista4questao27();
void lista4questao28();
void lista4questao29();
void lista4questao30();
void lista4questao31();
void lista4questao32();

void lista4questao01()
{
    for (int i = 0; i <= 40; i += 5)
    {
        printf("%d ", i);
    }
    printf("Acabou!\n");
}

void lista4questao02()
{
    for (int i = 100; i >= 0; i -= 10)
    {
        printf("%d ", i);
    }
    printf("Acabou!\n");
}

void lista4questao03()
{
    int numero;
    printf("Digite um valor: ");
    scanf("%d", &numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

void lista4questao04()
{
    int numero;
    printf("Digite um valor: ");
    scanf("%d", &numero);
    printf("Contagem: ");
    for (int i = 0; i <= numero; i++)
    {
        printf("%d, ", i);
    }
    printf("FIM!\n");
}

void lista4questao05()
{
    char sexo;
    float peso;
    int mulheres = 0;
    int homens = 0;
    float mediaPeso = 0;
    float maiorPeso = 0;
    for (int i = 0; i < 8; i++)
    {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite o peso em kg: ");
        scanf("%f", &peso);
        if (sexo == 'F')
        {
            mulheres++;
            mediaPeso += peso;
        }
        else
        {
            if (peso > 100)
                homens++;
            if (peso > maiorPeso)
                maiorPeso = peso;
        }
    }
    printf("Quantas mulheres foram cadastradas: %d\n", mulheres);
    printf("Quantos homens pesam mais de 100kg: %d\n", homens);
    printf("A média de peso entre as mulheres: %g\n", mediaPeso / mulheres);
    printf("O maior peso entre os homens: %g\n", maiorPeso);
}

void lista4questao06()
{
    int primeiroTermo, razao, soma;
    char ch;
    printf("Digite o primeiro termo e a razão de uma PA, separados por vírgula: ");
    scanf("%d%c%d", &primeiroTermo, &ch, &razao);
    printf("Sequência: %d", primeiroTermo);
    soma = primeiroTermo;
    for (int i = 0; i <= 10; i++)
    {
        primeiroTermo += razao;
        soma += primeiroTermo;
        printf(", %d", primeiroTermo);
    }
    printf("\nSoma: %d\n", soma);
}

void lista4questao07()
{
    int proximoNumero;
    int numeroAtual = 1;
    int numeroAnterior = 0;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 0)
        {
            printf("%d ", numeroAnterior);
        }
        else if (i == 1)
        {
            printf("%d ", numeroAtual);
        }
        else
        {
            proximoNumero = numeroAtual + numeroAnterior;
            numeroAnterior = numeroAtual;
            numeroAtual = proximoNumero;
            if (i == 10)
            {
                printf("%d\n", numeroAtual);
            }
            else
            {
                printf("%d ", numeroAtual);
            }
        }
    }
}

void lista4questao08()
{
    int numero = 6;
    while (numero <= 11)
    {
        printf("%d ", numero);
        numero++;
    }
    printf("Acabou!\n");
}

void lista4questao09()
{
    int numero = 10;
    while (numero >= 3)
    {
        printf("%d ", numero);
        numero--;
    }
    printf("Acabou!\n");
}

void lista4questao10()
{
    int numero = 0;
    while (numero <= 18)
    {
        printf("%d ", numero);
        numero += 3;
    }
    printf("Acabou!\n");
}

void lista4questao11()
{
    int numero = 100;
    while (numero >= 0)
    {
        printf("%d ", numero);
        numero -= 5;
    }
    printf("Acabou!\n");
}

void lista4questao12()
{
    int numero;
    int contador = 1;
    printf("Digite um valor: ");
    scanf("%d", &numero);
    printf("Contagem: ");
    while (contador <= numero)
    {
        printf("%d ", contador);
        contador++;
    }
    printf("Acabou!\n");
}

void lista4questao13()
{
    int numero = 30;
    while (numero >= 1)
    {
        if (numero % 4 == 0)
        {
            printf("[%d] ", numero);
        }
        else
        {
            printf("%d ", numero);
        }
        numero--;
    }
    printf("\n");
}

void lista4questao14()
{
    int primeiroValor, ultimoValor, incremento;
    printf("Digite o primeiro Valor: ");
    scanf("%d", &primeiroValor);
    printf("Digite o último Valor: ");
    scanf("%d", &ultimoValor);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);
    while (primeiroValor <= ultimoValor)
    {
        printf("%d ", primeiroValor);
        primeiroValor += incremento;
    }
    printf("Acabou!\n");
}

void lista4questao15()
{
    int primeiroValor, ultimoValor, incremento;
    printf("Digite o primeiro Valor: ");
    scanf("%d", &primeiroValor);
    printf("Digite o último Valor: ");
    scanf("%d", &ultimoValor);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);
    if (primeiroValor > ultimoValor)
    {
        while (ultimoValor <= primeiroValor)
        {
            printf("%d ", ultimoValor);
            ultimoValor += incremento;
        }
    }
    else
    {
        while (primeiroValor <= ultimoValor)
        {
            printf("%d ", primeiroValor);
            primeiroValor += incremento;
        }
    }
    printf("Acabou!\n");
}

void lista4questao16()
{
    int numero = 6;
    int soma = 6;
    while (numero <= 100)
    {
        numero += 2;
        soma += numero;
    }
    printf("6 + 8 + 10 + 12 + 14 + ... + 98 + 100 = %d\n", soma);
}

void lista4questao17()
{
    int numero = 500;
    int soma = 500;
    while (numero >= 0)
    {
        numero -= 50;
        soma += numero;
    }
    printf("500 + 450 + 350 + 300 + ... + 50 + 0 = %d\n", soma);
}

void lista4questao18()
{
    int contador = 0;
    int numero, soma;
    while (contador < 7)
    {
        printf("%d. Insira um número inteiro: ", contador + 1);
        scanf("%d", &numero);
        soma += numero;
        contador++;
    }
    printf("Soma dos números inseridos: %d\n", soma);
}

void lista4questao19()
{
    int contador = 0;
    int numero;
    int pares = 0;
    int impares = 0;
    while (contador < 6)
    {
        printf("%d. Insira um número inteiro: ", contador + 1);
        scanf("%d", &numero);
        if (numero % 2)
        {
            pares++;
        }
        else
        {
            impares++;
        }
        contador++;
    }
    printf("%d números são pares e %d números são ímpares\n", pares, impares);
}

void lista4questao20()
{
    srand(time(0));
    int quantidade = 0;
    int numero;
    int numerosSorteados[20];
    int acimaDe5 = 0;
    int divisiveisPor3 = 0;

    while (quantidade < 20)
    {
        numero = (rand() % (10) + 1);
        numerosSorteados[quantidade] = numero;
        quantidade++;
        if (numero % 3 == 0)
        {
            divisiveisPor3++;
        }
        if (numero > 5)
        {
            acimaDe5++;
        }
    }
    printf("Números sorteados: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", numerosSorteados[i]);
    }
    printf("\n");
    printf("Quantos números estão acima de 5: %d\n", acimaDe5);
    printf("Quantos números são divisíveis por 3: %d\n", divisiveisPor3);
}

void lista4questao21()
{
    int contador = 0;
    float maiorPreco = 0;
    float menorPreco = __INT_MAX__;
    float preco;
    while (contador < 8)
    {
        printf("Digite o preço do produto %d: ", contador + 1);
        scanf("%f", &preco);
        if (preco > maiorPreco)
        {
            maiorPreco = preco;
        }
        if (preco < menorPreco)
        {
            menorPreco = preco;
        }
        contador++;
    }
    printf("Maior preço: %g\n", maiorPreco);
    printf("Menor preço: %g\n", menorPreco);
}

void lista4questao22()
{
    int contador = 0;
    int idade;
    int maisDe18 = 0;
    int menosDe5 = 0;
    int maiorIdade = 0;
    float media;
    while (contador < 10)
    {
        printf("Digite a idade da pessoa %d: ", contador + 1);
        scanf("%d", &idade);
        if (idade >= 18)
        {
            maisDe18++;
        }
        if (idade < 5)
        {
            menosDe5++;
        }
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        media += idade;
        contador++;
    }
    printf("Média de idade do grupo: %g\n", media / 10);
    printf("Pessoas com mais de 18 anos: %d\n", maisDe18);
    printf("Pessoas com menos de 5 anos: %d\n", menosDe5);
    printf("Maior idade lida: %d", maiorIdade);
}

void lista4questao23()
{
    int contador = 0;
    int idade;
    char sexo;
    while (contador < 5)
    {
        printf("Digite a idade da pessoa %d: ", contador + 1);
        scanf("%d", &idade);
        printf("Digite o sexo da pessoa %d (M/F): ", contador + 1);
        scanf(" %c", &sexo);
    }
    printf("Quantidade de homens cadastrados: %d", homens);
    printf("Quantidade de mulheres cadastradas: %d", mulheres);
    printf("A média de idade do grupo: %g", media);
    printf("A média de idade dos homens: %g", mediaHomens);
    printf("Quantidade de mulheres com mais de 20 anos: ", mulheresMaisDe20);
}

void lista4questao24()
{
}

void lista4questao25()
{
}

void lista4questao26()
{
}

void lista4questao27()
{
}

void lista4questao28()
{
}

void lista4questao29()
{
}

void lista4questao30()
{
}

void lista4questao31()
{
}

void lista4questao32()
{
}