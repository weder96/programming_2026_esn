#include <stdio.h>
#include <stdlib.h>
#include "PriorityQueueHeap.h" // Includes the Priority Queue (Heap) library

// Structure representing a patient
struct patient {
    char name[30]; // Stores the patient's name (up to 30 characters)
    int priority;  // Stores the patient's priority level
};

int main() {
    // Initializes an array with 6 patients and their respective priorities
    struct patient items[6] = {{"Andre", 1},
                               {"Bianca", 2},
                               {"Carlos", 5},
                               {"Nilza", 8},
                               {"Inacio", 6},
                               {"Edu", 4}};

    PriorityQueue* pq;           // Creates a pointer for the priority queue
    pq = create_PriorityQueue(); // Initializes/creates the priority queue in memory

    int i;
    // Loop to insert the 6 patients into the priority queue
    for (i = 0; i < 6; i++) {
        // Displays the index, priority, and name of the patient being inserted
        printf("%d) %d %s\n", i, items[i].priority, items[i].name); 
        // Inserts the current patient into the priority queue
        insert_PriorityQueue(pq, items[i].name, items[i].priority);
    }

    printf("=================================\n");

    // Displays how the priority queue is internally organized
    print_PriorityQueue(pq); 

    // Test: inserting a new single patient
    printf("=================================\n");
    insert_PriorityQueue(pq, "Test", 9); // Inserts the patient "Test" with priority 9
    print_PriorityQueue(pq);             // Shows the updated queue

    // Test: removing the patient with the highest priority at the moment
    printf("=================================\n");
    remove_PriorityQueue(pq);  // Removes the patient at the top (highest priority)
    print_PriorityQueue(pq);   // Shows the queue after removal

    // Test: emptying the rest of the queue one by one
    printf("=================================\n");
    for (i = 0; i < 6; i++) {
        char name[30];
        // Peeks at the current highest priority patient and saves it to the 'name' variable
        peek_PriorityQueue(pq, name); 
        // Displays the name of the patient that will be attended/removed
        printf("%d) %s\n", i, name); 
        // Removes the patient from the queue after checking
        remove_PriorityQueue(pq);
    }

    // Frees the memory space that was used by the queue
    free_PriorityQueue(pq); 

    // Executes an OS command (exit the terminal)
    system("exit"); 
    
    return 0; // Indicates that the program finished successfully
}