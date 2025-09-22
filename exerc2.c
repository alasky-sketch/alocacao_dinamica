#include <stdio.h>
#include <stdlib.h>
/*Primeiramente, é declarada a variável do tamanho do veotr, o vetor e a variável de controle */
/*Em seguida, é pedido ao usuário que informasse o tamnaho desejado do vetor*/
/*Então, um espaço é alocado na memória para o vetor*/
/*Após isso, é verificado se a alocação foi realizada com sucesso*/
/*A seguir, os valores digitados pelo o usuário são lidos e armazenados no vetor */
/*Logo depois, os valores são imprimidos na tela*/
/*Por fim, é liberado o espaço alocado na memória*/

int main() {
    int tamanho, *v, i;
    

    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    
    v = (int *) malloc(tamanho * sizeof(int));
    

    if (v == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1; 
    }

   
    printf("Digite os %d valores do vetor:\n", tamanho);


    for (i = 0; i < tamanho; i++) {
        printf("Valor na posicao %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    

    
    for (i = 0; i < tamanho; i++) {
        printf("Os números são: %d\n", v[i]);
    }
    
    
    free(v);

    return 0; 
}