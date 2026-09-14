#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;
    int *values = malloc(n * sizeof(int));

    if (values == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        values[i] = i * 10;
    }

    printf("Project started successfully\n");
    free(values);
    return 0;
}
