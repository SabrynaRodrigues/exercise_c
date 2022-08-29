// by sabryna 29.08.2022 - Entrada de valores, verificação e mensagem final
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Main program
main(){
	setlocale(LC_ALL,"Portuguese");
	// declarando variáveis
	int numid, password;
	for(;;){ // laço de repetição
	printf("Enter your identification number: ");
	scanf("%d",&numid);
	
	printf("Password: ");
	scanf("%d",&password);
	
	if (numid==123 && password==456){
		printf("Welcome!");
		break;
	}else{
		printf("Incorret! Try again.\n\n");
	}
	}
	printf("\n\n"); 
	system("pause");	
}


