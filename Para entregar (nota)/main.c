#include <stdio.h>
#include <stdlib.h>


int main() {
	float opcao, c, f, km, mi, m, p;
	char operacao;
	
	printf("\n CONVERSAO DE VALORES\n");
	
	printf("Digite [t] para converter temperaturas e [d] para converter distancias: ");
	scanf("%c", &operacao);
	
	if(operacao == 't'){
		printf("Digite qual opcao deseja executar: [1] Celsius para Fahrenheint ou [2] Fahrenheint para Celsius: ");
		scanf("%f", &opcao);
		
		if(opcao == 1){
			printf("Digite a temperatura em Celsius(C): ");
			scanf("%f", &c);
			
			f = 1.8 * c + 32;
			
			printf("\nA temperatura convertida para Fahrenheint sera de: %.1fF \n", f);
		}
		else if(opcao == 2){
			printf("Digite a temperatura em Fahrenheint(F): ");
			scanf("%f", &f);
			
			c = (f - 32) / 1.8;
			
			printf("\nA temperatura convertida para Celsius sera de: %.1fF \n", c);
		}
		else{
			printf("Opcao invalida, por favor, insira um valor valido!");
		}
	}
	
	else if(operacao == 'd'){
		printf("Digite qual opcao deseja executar: [1] Quilometros em milhas ou [2] Metros em pes");
		scanf("%f", &opcao);
		
		if(opcao == 1){
			printf("Digite a distancia em quilometros(km): ");
			scanf("%f", &km);
			
			mi = km / 1.609;
			
			printf("\nA distancia convertida para milhas sera de: %f", mi);
		}
		else if(opcao == 2){
			printf("Digite a distancia em metros: ");
			scanf("%f", &m);
			
			p = m * 3.28;
			
			printf("\nA distancia convertida para pes sera de: %f", p);
		}
	}
	
	else{
		printf("Opcao invalida! Tente novamente!");
	}
	
	return 0;
}
