#include <stdio.h>
#include <stdlib.h>

void helper(void) {
    int *buffer = malloc(20 * sizeof(int));

    if (buffer == NULL) {
        printf("Allocation failed\n");
        return;
    }

    printf("Helper executed\n");
    free(buffer);
}

/* TODO: Improve helper error reporting */
