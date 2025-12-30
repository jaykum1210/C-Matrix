#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of iterations = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int *p = (int *)malloc(sizeof(int));

        if (p == NULL) {
            printf("Memory Allocation Failed at iteration %d\n", i);
            return 0;
        }
        *p = i; 
        free(p);
    }
    printf("Program executed\n");
    return 0;
}
