#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\bye.txt","w");
    if (a==NULL)
    {
        printf("Not found\n");
        return 0;
    }
    fprintf(a,"Hello World!\n");
    fflush(a);
    printf("Data modified\n");
    return 0;
}