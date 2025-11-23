#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\bye.txt","w");
    if (a==NULL)
    {
        printf("Not Found\n");
        return 0;
    }
    fprintf(a,"HIIIIIIIIIIIIIIIIIi\n");
    fclose(a);
    return 0;
}