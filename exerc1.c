#include <stdio.h>
#include <stdlib.h>
/*Primeiro,foi declarado o array juntamente da variável de controle dos loops e o tamanho do array*/
/*Em seguida, utilizando a funçao mallloc, um espaço na memória foi alocado para o vetor de 5 numeros inteiros e com a funcao sizeof é retornado o tamannho em bytes*/
/*Entao, é feita uma verificação se a memoria foi alocada com sucesso*/
/*Depois disso, é pedido para o usuário que digitasse cinco numeros*/
/*Após a leitura, os números inseridos são exibidos na tela*/
/*Por fim, a memória alocada dinamicamente é liberada com a função free*/
int main() {
   int *a, i, tamanho = 5; 

    a = (int *) malloc(tamanho * sizeof(int));
    if (a == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite 5 números inteiros:");
        scanf("%d", &a[i]);
    }
    
    printf("\nNúmeros inseridos:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Número %d: %d\n", i+1, a[i]);
    }

    free(a);
    return 0;
}


