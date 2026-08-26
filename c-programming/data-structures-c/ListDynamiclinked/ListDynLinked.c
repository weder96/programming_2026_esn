#include <stdio.h>
#include <stdlib.h>
#include "ListDynLinked.h" // Includes the Prototypes

// List type definition
struct element {
    struct student data;
    struct element *next;
};

typedef struct element Node;
typedef struct element* List;

List* create_list() {
    List* li = (List*) malloc(sizeof(List));
    if(li != NULL)
        *li = NULL;
    return li;
}

void free_list(List* li) {
    if(li != NULL) {
        Node* node;
        while((*li) != NULL) {
            node = *li;
            *li = (*li)->next;
            free(node);
        }
        free(li);
    }
}

int search_list_pos(List* li, int pos, struct student *st) {
    if(li == NULL || pos <= 0)
        return 0;
    Node *node = *li;
    int i = 1;
    while(node != NULL && i < pos) {
        node = node->next;
        i++;
    }
    if(node == NULL)
        return 0;
    else {
        *st = node->data;
        return 1;
    }
}

int search_list_id(List* li, int id, struct student *st) {
    if(li == NULL)
        return 0;
    Node *node = *li;
    while(node != NULL && node->data.id != id) {
        node = node->next;
    }
    if(node == NULL)
        return 0;
    else {
        *st = node->data;
        return 1;
    }
}

int insert_list_end(List* li, struct student st) {
    if(li == NULL)
        return 0;
    Node *node;
    node = (Node*) malloc(sizeof(Node));
    if(node == NULL)
        return 0;
    node->data = st;
    node->next = NULL;
    
    if((*li) == NULL) { // empty list: insert at the beginning
        *li = node;
    } else {
        Node *aux;
        aux = *li;
        while(aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = node;
    }
    return 1;
}

int insert_list_begin(List* li, struct student st) {
    if(li == NULL)
        return 0;
    Node* node;
    node = (Node*) malloc(sizeof(Node));
    if(node == NULL)
        return 0;
    node->data = st;
    node->next = (*li);
    *li = node;
    return 1;
}

int insert_list_sorted(List* li, struct student st) {
    if(li == NULL)
        return 0;
    Node *node = (Node*) malloc(sizeof(Node));
    if(node == NULL)
        return 0;
    node->data = st;
    
    if((*li) == NULL) { // empty list: insert at the beginning
        node->next = NULL;
        *li = node;
        return 1;
    } else {
        Node *prev, *current = *li;
        while(current != NULL && current->data.id < st.id) {
            prev = current;
            current = current->next;
        }
        if(current == *li) { // insert at the beginning
            node->next = (*li);
            *li = node;
        } else {
            node->next = current;
            prev->next = node;
        }
        return 1;
    }
}

int remove_list(List* li, int id) {
    if(li == NULL)
        return 0;
    if((*li) == NULL) // empty list
        return 0;
        
    Node *prev, *node = *li;
    while(node != NULL && node->data.id != id) {
        prev = node;
        node = node->next;
    }
    if(node == NULL) // not found
        return 0;

    if(node == *li) // remove the first one?
        *li = node->next;
    else
        prev->next = node->next;
        
    free(node);
    return 1;
}

int remove_list_begin(List* li) {
    if(li == NULL)
        return 0;
    if((*li) == NULL) // empty list
        return 0;

    Node *node = *li;
    *li = node->next;
    free(node);
    return 1;
}

int remove_list_end(List* li) {
    if(li == NULL)
        return 0;
    if((*li) == NULL) // empty list
        return 0;

    Node *prev, *node = *li;
    while(node->next != NULL) {
        prev = node;
        node = node->next;
    }

    if(node == (*li)) // remove the first one?
        *li = node->next;
    else
        prev->next = node->next;
        
    free(node);
    return 1;
}

int list_size(List* li) {
    if(li == NULL)
        return 0;
    int count = 0;
    Node* node = *li;
    while(node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

int list_full(List* li) {
    return 0; // A dynamic list is technically never "full" unless memory runs out
}

int list_empty(List* li) {
    if(li == NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;
}

void print_list(List* li) {
    if(li == NULL)
        return;
    Node* node = *li;
    while(node != NULL) {
        printf("ID: %d\n", node->data.id);
        printf("Name: %s\n", node->data.name);
        printf("Grades: %f %f %f\n", node->data.g1,
                                     node->data.g2,
                                     node->data.g3);
        printf("-------------------------------\n");

        node = node->next;
    }
}