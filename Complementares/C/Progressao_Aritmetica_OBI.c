#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int nrElementos,elemento,elemAnt,razaoAtual,razaoAntiga;
	int nrPAs,controle,r;
	controle = 0 ; nrPAs = 1;
	
	printf("Informe o numero de elementos da serie: ");
	scanf("%d",&nrElementos);
	printf("Insira os numeros da serie separado por espaço: ");
	
	for (r = 0 ; r < nrElementos ; r++){
		scanf("%d",&elemento);
		
		if (r == 0)
			elemAnt = elemento;
		
		if (r == 1){
			razaoAtual = elemento - elemAnt;
			elemAnt = elemento;
		}
		
		if ( r >= 2 ){
			razaoAntiga = razaoAtual;
			razaoAtual = elemento - elemAnt;
			elemAnt = elemento;
			printf ("Razao antiga: %d | Razao atual: %d | Controle: %d |",razaoAntiga,razaoAtual,controle);	
			
			if ( controle == 0 ){
				if ( razaoAntiga != razaoAtual){
					nrPAs++;
					controle = 1;
				}
			}else
				controle = 0;
			
			printf(" PAs: %d\n",nrPAs);
		}
	}
	printf("--------------------------------------------------------\n");
	printf("Ultimo elemento lido: %d\n",elemento);
	printf("Número de PAs: %d",nrPAs);
	getch();
	return 1;
}