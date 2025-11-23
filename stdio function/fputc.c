#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\bye.txt","w");
    if (a==NULL)
    {
        printf("Not found\n");
        return 0;
    }
    fputc('A',a);
    fputc('B',a);
    printf("Printed\n");
    fclose(a);
    return 0;
}