#include <stdio.h>
#include <stdlib.h>

void print_message(const char *message) {
    printf("%s\n", message);
}

int *create_array(int n) {
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    return arr;
}

/* TODO: Add input validation */
