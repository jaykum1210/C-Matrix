#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option = 0, val;
    int *p1 = NULL;
    float *p2 = NULL;
    char *p4 = NULL;

    while (option != 5)
    {
        printf("--------------Manu--------------\n");
        printf("1. Allocate to Integer\n");
        printf("2. Allocate to Float\n");
        printf("3. Allocate to Array\n");
        printf("4. Allocate to String\n");
        printf("5. Exit\n");
        printf("Enter option = ");
        scanf("%d", &option);
        switch (option)
        {

        case 1:
            free(p1);
            p1 = malloc(sizeof(int));
            if (p1)
                printf("Integer allocated\n");
            break;

        case 2:
            free(p2);
            p2 = malloc(sizeof(float));
            if (p2)
                printf("Float allocated\n");
            break;

        case 3:
            free(p1);
            scanf("%d", &val);
            p1 = malloc(val * sizeof(int));
            if (p1)
                printf("Array allocated\n");
            break;

        case 4:
            free(p4);
            p4 = malloc(100 * sizeof(char));
            if (p4)
                printf("String allocated\n");
            break;

        case 5:
            printf("Exit\n");
            break;
        }
    }

    free(p1);
    free(p2);
    free(p4);
}