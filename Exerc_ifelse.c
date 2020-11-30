#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	/*
		if(condição){intrução 1}
		else{intrução 2}
	*/
	
	int n1, n2;
	
	printf("Digite o numero 1 \n");
	scanf("%i",&n1);
	
	printf("Digite o numero 2 \n");
	scanf("%i",&n2);
	
	if(n1 < n2){
			printf("a ordem eh %i %i \n\n",n1,n2);
	}else {
		printf("a ordem eh %i %i \n\n",n2,n1);
	}
		
}
