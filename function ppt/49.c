#include <stdio.h>

void tran(int arr[][100], int n){
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main(){
    int n;
    printf("Enter size of square matrix = ");
    scanf("%d",&n);

    int arr[100][100];

    printf("Enter %d x %d elements:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    tran(arr, n);

    printf("Transposed Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
