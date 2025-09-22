#include <stdio.h>
#include <stdlib.h>
/*Primeiro, são declaradas a variavel referente ao tamanho do vetor, o vetor, a variável de controle e as variáveis para números pares e ímpares*/
/*Depois, é pedido ao usuário que forneça o tamanho desejado do vetor */
/*Então, é alocado um espaço na memória para o vetor*/
/*Em seguida, é verificado se a alocação foi bem-sucedida*/
/*Após isso, os números digitados pelo usuário são lidos e armazenados no vetor*/
/*A seguir, através de um loop da função for, ela percorre todo vetor e conta quantos dos números são pares e ímpares*/
/*Depois, mostra na tela quantos números tem no vetore quantos deles são números pares e ímpares */
/*E, por fim, o espaço que foi alocado na memória é liberado*/
int main() {
    int tamanho, *v, i, par = 0, ímpar = 0;
    
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    
    v = (int *) malloc(tamanho * sizeof(int));
    
    
    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1; 
    }

   
    
    
    for (i = 0; i < tamanho; i++) {
        printf("Digite os valores do vetor: %d\n", tamanho , i + 1);
        scanf("%d", &vetor[i]);
    }

   
    for (i = 0; i < tamanho; i++) {
        
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        
    }
    
    printf("\n--- Resultados ---\n");
    printf("Total de numeros: %d\n", tamanho);
    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);
    
    
    free(v);
   

    return 0; 
}