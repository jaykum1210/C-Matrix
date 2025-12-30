#include <stdio.h>
#include <stdlib.h>

int main() {
    long n;
    printf("Enter number of integers = ");
    scanf("%ld", &n);

    int *p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Memory Allocation Failed\n");
        return 0;
    }

    printf("Memory Allocated for %ld integers\n", n);

    free(p);
    return 0;
}
