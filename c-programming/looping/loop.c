#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    printf("Hello, World!\n");

    for (int i = 0; i < 10; ++i) {
        printf("Running... %d\n", i + 1);

        sleep(1);
    }

    printf("Finished running.\n");

    return 0;
}