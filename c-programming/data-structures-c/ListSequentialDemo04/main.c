#include <stdio.h>
#include <stdlib.h>
#include "ListSequential.h" 

int main() {
    struct student a[5] = {{102, "Thiago Santos", 9.5, 7.8, 6.5},
                           {104, "Guilherme Costa", 7.5, 8.7, 6.8},
                           {101, "Heloisa Martins", 9.7, 6.7, 8.4},
                           {105, "Renato Andrade", 3.7, 2.1, 3.1},                           
                           {103, "Rafael Souza", 5.7, 6.1, 7.4}                         
                    };
                           
    List* li = create_list();
    
    int i;
    int qty_elements_a = sizeof(a) / sizeof(a[0]);
    printf("Sudents Class A Qty: %d \n", qty_elements_a);


    for(i = 0; i < qty_elements_a; i++)
        insert_list_sorted(li, a[i]);

    
    printf("\n\n");    
    // 3. Teste 1: Cenário de Sucesso (Recurso deferido)
    printf("CENÁRIO 1: Atualizando a nota g2 do aluno 102 (Thiago Santos) para 8.5...\n");
    int status1 = update_student_grade(li, 102, 2, 8.5);
    printf("Status da operacao: %s\n\n", status1 ? "SUCESSO" : "FALHA");

    // 4. Teste 2: Cenário de Falha (Aluno não matriculado)
    printf("CENÁRIO 2: Tentando atualizar aluno inexistente (999)...\n");
    int status2 = update_student_grade(li, 999, 1, 10.0);
    printf("Status da operacao: %s\n\n", status2 ? "SUCESSO" : "FALHA (Esperado)");

    // 5. Teste 3: Cenário de Falha (Índice de nota inválido)
    printf("CENÁRIO 3: Tentando atualizar uma nota com índice inválido (g4)...\n");
    int status3 = update_student_grade(li, 101, 4, 9.0);
    printf("Status da operacao: %s\n\n", status3 ? "SUCESSO" : "FALHA (Esperado)");

    printf("ESTADO FINAL DA TURMA (Apenas Thiago Santos deve ter a nota g2 alterada):\n");
    print_list(li);

    free_list(li);    
  

    system("exit");
    return 0;
}