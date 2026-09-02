#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h" // Includes prototypes

// Definition of the list element type
struct element {
    struct element *prev;
    struct student data;
    struct element *next;
};
typedef struct element Elem;

List* create_list() {
    List* list = (List*) malloc(sizeof(List));
    if (list != NULL)
        *list = NULL;
    return list;
}

void free_list(List* list) {
    if (list != NULL) {
        Elem* node;
        while ((*list) != NULL) {
            node = *list;
            *list = (*list)->next;
            free(node);
        }
        free(list);
    }
}

int get_list_by_pos(List* list, int pos, struct student *st) {
    if (list == NULL || pos <= 0)
        return 0;
    Elem *node = *list;
    int i = 1;
    while (node != NULL && i < pos) {
        node = node->next;
        i++;
    }
    if (node == NULL)
        return 0;
    else {
        *st = node->data;
        return 1;
    }
}

int get_list_by_id(List* list, int id, struct student *st) {
    if (list == NULL)
        return 0;
    Elem *node = *list;
    while (node != NULL && node->data.registration_number != id) {
        node = node->next;
    }
    if (node == NULL)
        return 0;
    else {
        *st = node->data;
        return 1;
    }
}

int insert_list_end(List* list, struct student st) {
    if (list == NULL)
        return 0;
    Elem *node = (Elem*) malloc(sizeof(Elem));
    if (node == NULL)
        return 0;
    node->data = st;
    node->next = NULL;
    if ((*list) == NULL) { // Empty list: insert at beginning
        node->prev = NULL;
        *list = node;
    } else {
        Elem *aux = *list;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = node;
        node->prev = aux;
    }
    return 1;
}

int insert_list_begin(List* list, struct student st) {
    if (list == NULL)
        return 0;
    Elem* node = (Elem*) malloc(sizeof(Elem));
    if (node == NULL)
        return 0;
    node->data = st;
    node->next = (*list);
    node->prev = NULL;
    if (*list != NULL) // Non-empty list: point previous to new node!
        (*list)->prev = node;
    *list = node;
    return 1;
}

int insert_list_sorted(List* list, struct student st) {
    if (list == NULL)
        return 0;
    Elem *node = (Elem*) malloc(sizeof(Elem));
    if (node == NULL)
        return 0;
    node->data = st;
    if ((*list) == NULL) { // Empty list: insert at beginning
        node->next = NULL;
        node->prev = NULL;
        *list = node;
        return 1;
    } else {
        Elem *prev_node, *curr_node = *list;
        while (curr_node != NULL && curr_node->data.registration_number < st.registration_number) {
            prev_node = curr_node;
            curr_node = curr_node->next;
        }
        if (curr_node == *list) { // Insert at beginning
            node->prev = NULL;
            (*list)->prev = node;
            node->next = (*list);
            *list = node;
        } else {
            node->next = prev_node->next;
            node->prev = prev_node;
            prev_node->next = node;
            if (curr_node != NULL)
                curr_node->prev = node;
        }
        return 1;
    }
}

int remove_list(List* list, int id) {
    if (list == NULL)
        return 0;
    if ((*list) == NULL) // Empty list
        return 0;
    Elem *node = *list;
    while (node != NULL && node->data.registration_number != id) {
        node = node->next;
    }
    if (node == NULL) // Not found
        return 0;

    if (node->prev == NULL) // Removing the first element?
        *list = node->next;
    else
        node->prev->next = node->next;

    if (node->next != NULL) // Not the last element?
        node->next->prev = node->prev;

    free(node);
    return 1;
}

int remove_list_begin(List* list) {
    if (list == NULL)
        return 0;
    if ((*list) == NULL) // Empty list
        return 0;

    Elem *node = *list;
    *list = node->next;
    if (node->next != NULL)
        node->next->prev = NULL;

    free(node);
    return 1;
}

int remove_list_end(List* list) {
    if (list == NULL)
        return 0;
    if ((*list) == NULL) // Empty list
        return 0;

    Elem *node = *list;
    while (node->next != NULL)
        node = node->next;

    if (node->prev == NULL) // Removing the first and only element
        *list = node->next;
    else
        node->prev->next = NULL;

    free(node);
    return 1;
}

int list_size(List* list) {
    if (list == NULL)
        return 0;
    int count = 0;
    Elem* node = *list;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

int is_list_full(List* list) {
    return 0;
}

int is_list_empty(List* list) {
    if (list == NULL)
        return 1;
    if (*list == NULL)
        return 1;
    return 0;
}

void print_list(List* list) {
    if (list == NULL)
        return;
    Elem* node = *list;
    while (node != NULL) {
        printf("Registration: %d\n", node->data.registration_number);
        printf("Name: %s\n", node->data.name);
        printf("Grades: %f %f %f\n", node->data.grade1,
                                     node->data.grade2,
                                     node->data.grade3);
        printf("-------------------------------\n");

        node = node->next;
    }
}