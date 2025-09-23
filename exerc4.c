#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Primeiro, é declaradas as variáveis t e s*/
/*Depois disso, é solicitado ao usuário que indique o tamanho que ele deseja que a string tenha, com a função getchar() para limpar o buffer e garantir que o \n atrapalhe a função fgets que é usada depois*/
/*Então, a variável char s tem um espaço alocado na memória através da função alocar que aloca dinamicamente a string, com 1 byte extra para o caractere nulo \0, também verificando se a alocação foi bem-sucedida*/
/*Após isso, se pede que o usuário digite o conteúdo da string, usando fgets para ler a string com espaços, até no máximo de caracteres que foram digitados pelo usuário e usa strcspn para remover a quebra de linha (\n) que o fgets pode adicionar no final*/
/*Em seguida, segue com a chamada da função remover que remove as vogais maiúsculas e minúsculas de uma string utilizando dois ponteiros: ptrl que lê a string original e ptre que escreve os caracteres não-vogais sobre a própria string e no final, coloca o \0 para terminar a nova string corretamente*/
/*Logo depois, É exibida na tela a string sem as vogais*/
/*Por fim, a memória alocada é liberada*/


 
char* alocar(int t) {
    char *str = (char *) malloc((t + 1) * sizeof(char)); 
    if (str == NULL) {
        printf("Erro na alocacao de memoria!\n");
        exit(1); 
    }
    return str;
}


void remover(char *str) {
    char *ptrl = str;
    char *ptre = str;

    while (*ptrl != '\0') {
        char c = *ptrl;
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            
            *ptre = *ptrl;
            ptre++;
        }
        ptrl++;
    }
    *ptre = '\0'; 
}

int main() {
    int t;
    char *s;

    printf("Digite o tamanho da string: ");
    scanf("%d", &t);
    getchar(); 

    
    s = alocar(t);

    printf("Digite o conteudo da string (maximo %d caracteres): ", t);
    fgets(s, t + 1, stdin);
    s[strcspn(s, "\n")] = 0;

    

    removerVogais(s);

    printf("String sem vogais: %s\n", s);

    
    free(minhaString);
    
    return 0;
}