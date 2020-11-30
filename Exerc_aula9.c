/* Faça um programa que receba 2 notas calcule a media,
 e diga se o aluno foi "aprovado"
caso a nota seja maior de 6 ou "reprovado" se a nota
menor de 6. */

#include <stdio.h>
#include <locale.h>

main(){

	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, media;

	printf("\nDigite a 1a. nota.: ");
	scanf("%f",&nota1);

	printf("\nDigite a 2a. nota.: ");
	scanf("%f",&nota2);

	media = (nota1+nota2)/2;
	printf("\n===========================================================");

	if(media > 6){
		printf("\n1a. Nota: %.2f \n \n2a. Nota: %.2f \n\nA média foi %.2f e o aluno está APROVADO!!!\n",nota1,nota2,media);
		}else {
			printf("\n1a. Nota: %.2f \n \n2a. Nota: %.2f \n\nA média foi %.2f e o aluno está REPROVADO!!!\n",nota1,nota2,media);
		}
	printf("\n===========================================================");
	}

