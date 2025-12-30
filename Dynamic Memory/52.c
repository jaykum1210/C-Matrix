#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;
    int a = 0, option, newsize;
    do
    {
        printf("\n---- MENU ----\n");
        printf("1. Create array\n");
        printf("2. Display array\n");
        printf("3. Increase size\n");
        printf("4. Reduce size\n");
        printf("5. Exit\n");
        printf("Enter choice = ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter size = ");
            scanf("%d", &a);
            arr = (int *)malloc(a * sizeof(int));
            if (arr == NULL)
            {
                printf("Memory Allocation Failed\n");
                return 0;
            }
            printf("Enter %d elemnets = ", a);
            for (int i = 0; i < a; i++)
            {
                scanf("%d",&arr[i]);
            }
            printf("Array Created\n");
            break;
        case 2:
            if (arr == NULL)
            {
                printf("Array not created\n");
                break;
            }
            printf("Array = ");
            for (int i = 0; i < a; i++)
            {
                printf("%d ", arr[i]);
            }
            break;
        case 3:
            printf("Enter new size = ");
            scanf("%d", &newsize);
            if (newsize < a)
            {
                printf("Size is small\n");
                break;
            }
            arr = (int *)realloc(arr, newsize * sizeof(int));
            if (arr == NULL)
            {
                printf("Memory Reallocation Failed\n");
                return 0;
            }
            printf("Enter %d new elemnets = ", newsize - a);
            for (int i = 0; i < newsize - a; i++)
            {
                scanf("%d", &arr[i + a]);
            }
            a = newsize;
            printf("Array is increased\n");
            break;
        case 4:
            printf("Enter new size = ");
            scanf("%d", &newsize);
            if (newsize > a)
            {
                printf("Size is Big\n");
                break;
            }
            arr = (int *)realloc(arr, newsize * sizeof(int));
            if (arr == NULL)
            {
                printf("Memory Reallocation Failed\n");
                return 0;
            }
            a = newsize;
            printf("Array is Reduced\n");
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Enter valid option\n");
            break;
        }
    } while (option != 5);
    free(arr);
    return 0;
}