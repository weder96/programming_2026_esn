#include <stdio.h>
#include <stdlib.h>
#include "ListSequential.h" 

int main() {
    // 2. Utiliza o array de dados fornecido para o teste
    struct student a[5] = {
        {102, "Thiago Santos", 9.5, 7.8, 6.5},
        {104, "Guilherme Costa", 7.5, 8.7, 6.8},
        {101, "Heloisa Martins", 9.7, 6.7, 8.4},
        {105, "Renato Andrade", 3.7, 2.1, 3.1},                           
        {103, "Rafael Souza", 5.7, 6.1, 7.4}                         
    };

    // 3. Popula a estrutura da lista sequencial iterando sobre o array
    List* li = create_list();
    int qty_elements_a = sizeof(a) / sizeof(a[0]);
    int i;
    for(i = 0; i < qty_elements_a; i++)
       insert_list_sorted(li, a[i]);

    // 4. Validação do estado original
    printf("ESTADO ORIGINAL DA LISTA (Ordem de Aprovados):\n");
    print_list(li);

    // 5. Execução do algoritmo de inversão
    printf("\nINVERTENDO A LISTA IN-PLACE...\n");
    int status = reverse_list(li);
    
    if (status) {
        printf("Operacao realizada com SUCESSO.\n\n");
    } else {
        printf("FALHA na operacao (Lista Nula).\n\n");
    }

    // 6. Validação do estado invertido
    printf("ESTADO FINAL DA LISTA (Ordem de Chamada para Colacao):\n");
    print_list(li);

    // 7. Liberação de memória
    free(li);
  

    system("exit");
    return 0;
}