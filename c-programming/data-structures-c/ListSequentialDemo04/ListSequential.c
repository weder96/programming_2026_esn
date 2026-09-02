#include <stdio.h>
#include <stdlib.h>
#include "ListSequential.h" // Includes the Prototypes

// List type definition
struct list {
    int count;
    struct student data[MAX];
};

List* create_list() {
    List *li;
    li = (List*) malloc(sizeof(struct list));
    if(li != NULL)
        li->count = 0;
    return li;
}

void free_list(List* li) {
    free(li);
}

int get_list_pos(List* li, int pos, struct student *st) {
    if(li == NULL || pos <= 0 || pos > li->count)
        return 0;
    *st = li->data[pos-1];
    return 1;
}

int get_list_id(List* li, int id, struct student *st) {
    if(li == NULL)
        return 0;
    int i = 0;
    while(i < li->count && li->data[i].id != id)
        i++;
    if(i == li->count) // element not found
        return 0;

    *st = li->data[i];
    return 1;
}

int insert_list_end(List* li, struct student st) {
    if(li == NULL)
        return 0;
    if(li->count == MAX) // list full
        return 0;
    li->data[li->count] = st;
    li->count++;
    return 1;
}

int insert_list_start(List* li, struct student st) {
    if(li == NULL)
        return 0;
    if(li->count == MAX) // list full
        return 0;
    int i;
    for(i = li->count - 1; i >= 0; i--)
        li->data[i+1] = li->data[i];
    li->data[0] = st;
    li->count++;
    return 1;
}

int insert_list_sorted(List* li, struct student st) {
    if(li == NULL)
        return 0;
    if(li->count == MAX) // list full
        return 0;
    int k, i = 0;
    while(i < li->count && li->data[i].id < st.id)
        i++;

    for(k = li->count - 1; k >= i; k--)
        li->data[k+1] = li->data[k];

    li->data[i] = st;
    li->count++;
    return 1;
}

int remove_list(List* li, int id) {
    if(li == NULL)
        return 0;
    if(li->count == 0)
        return 0;
    int k, i = 0;
    while(i < li->count && li->data[i].id != id)
        i++;
    if(i == li->count) // element not found
        return 0;

    for(k = i; k < li->count - 1; k++)
        li->data[k] = li->data[k+1];
    li->count--;
    return 1;
}

int remove_list_optimized(List* li, int id) {
    if(li == NULL)
        return 0;
    if(li->count == 0)
        return 0;
    int i = 0;
    while(i < li->count && li->data[i].id != id)
        i++;
    if(i == li->count) // element not found
        return 0;

    li->count--;
    li->data[i] = li->data[li->count];
    return 1;
}

int remove_list_start(List* li) {
    if(li == NULL)
        return 0;
    if(li->count == 0)
        return 0;
    int k = 0;
    for(k = 0; k < li->count - 1; k++)
        li->data[k] = li->data[k+1];
    li->count--;
    return 1;
}

int remove_list_end(List* li) {
    if(li == NULL)
        return 0;
    if(li->count == 0)
        return 0;
    li->count--;
    return 1;
}

int list_size(List* li) {
    if(li == NULL)
        return -1;
    else
        return li->count;
}

int is_list_full(List* li) {
    if(li == NULL)
        return -1;
    return (li->count == MAX);
}

int is_list_empty(List* li) {
    if(li == NULL)
        return -1;
    return (li->count == 0);
}

void print_list(List* li) {
    if(li == NULL)
        return;
    int i;
    for(i = 0; i < li->count; i++) {
        printf("ID: %d\n", li->data[i].id);
        printf("Name: %s\n", li->data[i].name);
        printf("Grades: %f %f %f\n", li->data[i].g1,
                                     li->data[i].g2,
                                     li->data[i].g3);
        printf("-------------------------------\n");
    }
}


int remove_list_failed(List* li, float threshold) {
    // Verifica se a lista existe e se possui elementos
    if (li == NULL || li->count == 0) {
        return 0;
    }

    int removed_count = 0;
    int keep_idx = 0; // Índice para alocar os alunos que permanecerão

    for (int i = 0; i < li->count; i++) {
        // Calcula a média do aluno atual
        float avg = (li->data[i].g1 + li->data[i].g2 + li->data[i].g3) / 3.0;
        printf("Student ID %d: Average = %.2f\n", li->data[i].id, avg); 
        // Se o aluno atingiu o limiar, ele é mantido na lista
        if (avg >= threshold) {
            // Só copia se o índice de leitura for diferente do de escrita
            // para evitar cópias desnecessárias na mesma posição
            if (i != keep_idx) {
                li->data[keep_idx] = li->data[i];
            }
            keep_idx++;
        } else {
            // Aluno não atingiu o limiar e será "removido"
            removed_count++;
        }
    }

    // Atualiza a quantidade total de elementos válidos na lista
    li->count = keep_idx;
    return removed_count;
}


List* merge_lists(List* l1, List* l2) {
    // Valida se os ponteiros das listas de entrada existem
    if (l1 == NULL || l2 == NULL) {
        return NULL;
    }

    // Verifica se a mesclagem excederá a capacidade máxima do array estático
    if ((l1->count + l2->count) > MAX) {
        return NULL;
    }

    // Aloca a memória para a nova lista de presença (lista estática)
    List* l3 = (List*) malloc(sizeof(List));
    if (l3 == NULL) {
        return NULL; // Falha na alocação
    }
    
    l3->count = 0;

    // Copia os alunos da Turma A (l1) para a nova lista
    for (int i = 0; i < l1->count; i++) {
        l3->data[l3->count] = l1->data[i];
        l3->count++;
    }

    // Copia os alunos da Turma B (l2) para a nova lista
    for (int i = 0; i < l2->count; i++) {
        l3->data[l3->count] = l2->data[i];
        l3->count++;
    }

    return l3;
}

int remove_duplicates(List* li) {
    if (li == NULL || li->count <= 1) {
        return 0;
    }

    int removed_count = 0;
    int unique_count = 0;

    for (int i = 0; i < li->count; i++) {
        int is_duplicate = 0;

        // Verifica se a matrícula (id) já foi registrada na porção limpa da lista
        for (int j = 0; j < unique_count; j++) {
            if (li->data[i].id == li->data[j].id) {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate) {
            // Desloca o registro único para a próxima posição válida na lista
            if (i != unique_count) {
                li->data[unique_count] = li->data[i];
            }
            unique_count++;
        } else {
            removed_count++;
        }
    }

    // Atualiza o total de elementos da lista
    li->count = unique_count;
    return removed_count;
}


int update_student_grade(List* li, int id, int grade_index, float new_grade) {
    // Validação da lista e do índice da nota (deve ser estritamente 1, 2 ou 3)
    if (li == NULL || grade_index < 1 || grade_index > 3) {
        return 0;
    }

    // Busca sequencial pelo aluno na lista
    for (int i = 0; i < li->count; i++) {
        if (li->data[i].id == id) {
            // Aluno encontrado, atualiza a nota solicitada in-place
            switch (grade_index) {
                case 1: li->data[i].g1 = new_grade; break;
                case 2: li->data[i].g2 = new_grade; break;
                case 3: li->data[i].g3 = new_grade; break;
            }
            return 1; // Sucesso na atualização
        }
    }

    return 0; // Aluno não encontrado após varrer toda a lista
}