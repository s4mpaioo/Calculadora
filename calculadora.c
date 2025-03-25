#include <stdio.h> 

	void subtrai(float n1, float n2);
	void soma (float n1, float n2);
	void multiplica (float n1, float n2);
	void divisao (float n1, float n2);
	
	int main() {
		int operacao;
		float n1, n2, resultado;
			printf("Escolha uma operacao: \n");
			printf("1. Adicao\n");
			printf("2. Subtracao\n");
			printf("3. Multiplicacao\n");
			printf("4. Divisao\n");
			printf("Digite o numero da operacao desejada (1-4): ");
			scanf("%d", &operacao);
		
		
		printf("Digite o primeiro numero: \n");
		scanf("%f", &n1);
		printf("Digite o segundo numero: \n");
		scanf("%f", &n2);
		
		
		switch (operacao) {
			case 1:
				soma(n1, n2);
				break;
			case 2: 
				subtrai(n1, n2);
			break;
			
			case 3: 
				multiplica(n1, n2);
			break;
			
			case 4:
				divisao(n1, n2);
				break;
			default :
				printf("Opcao invalida!\n");
			break;
		}
		
		return 0;
	}
	
		void subtrai (float n1, float n2) {
			float resultado = n1 - n2;
			printf("O resultado da subtracao = %.2f\n", resultado);
		}	
		void soma (float n1, float n2) {
			float resultado = n1 + n2;
			printf("O resultado da adicao = %.2f\n", resultado);
		}
		void multiplica (float n1, float n2) {
			float resultado = n1 * n2;
			printf("O resultado da multiplicacao = %.2f\n", resultado);		
		}
		void divisao (float n1, float n2) {
				if	(n2 == 0) {
				printf("ERRO, Nenhum numero pode ser dividido por zero \n");
			}	else {
				float resultado = n1 / n2;
				printf("O resultado da divisao = %.2f\n", resultado);
			}
				
			
		}