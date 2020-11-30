/* Faça um programa que receba 2 notas calcule a media,
 e diga se o aluno foi "aprovado"
caso a nota seja maior de 6 ou "reprovado" se a nota
menor de 6. */

#include <stdio.h>
#include <locale.h>

main(){

	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, media;

	printf("Digite a 1a. nota.: \n");
	scanf("%f",&nota1);

	printf("Digite a 2a. nota.: \n");
	scanf("%f",&nota2);

	media = (nota1+nota2)/2;

	if(media > 6){
		printf("A média foi %2.f e o aluno está APROVADO!!!",media);
		}else {
			printf("A média foi %2.f e o aluno está REPROVADO!!!",media);
		}
	}

