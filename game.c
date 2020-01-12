#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int round(double number)
{
    return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}

int compare(const void* a, const void *b) {
	return (*(int *)a - *(int *)b);
}

int main () {
	
	int partidas = 0;
	int i = 0;
	
	scanf("%d", &partidas);
	
	int valores[partidas];
	
	for (i = 0; i < partidas; i++) {
		scanf("%d", &valores[i]);
	}
			
	qsort(valores, partidas, sizeof(int), compare);
	
	//após a odernação, como os dois jogadores estão otimizando sempre removendo o maior e menor número a cada jogada
	//o que restará no tabuleiro será o núemro do meio sempre
	int meio = partidas%2 == 0 ? round(partidas/2) - 1 : round(partidas/2);	
	printf("%d\n", valores[meio]);
		
	
	printf("\n");
	return (0);
}

