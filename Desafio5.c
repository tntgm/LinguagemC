#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

    int n1,n2,soma, subtracao, divisao, multiplicacao;

    printf("\nDigite o valor 1: ");
    scanf("%i",&n1);
    printf("\nDigite o valor 2: ");
    scanf("%i",&n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    divisao = n1 / n2;
    multiplicacao = n1 * n2;

    //printf("\nOs resultados s�o: \n[+] %i \n[-] %i \n[/] %i \n[*] %i", soma, subtracao, divisao, multiplicacao);
    printf("\n\t>>>RESULTADOS<<<\n");
    printf("\nO resultado da SOMA �...........: %i\n", soma);
    printf("\nO resultado da SUBTRA��O �......: %i\n", subtracao);
    printf("\nO resultado da DIVIS�O �........: %i\n", divisao);
    printf("\nO resultado da MULTIPLICA��O �..: %i\n", multiplicacao);
    printf("\n====================================\n\n");





	}
