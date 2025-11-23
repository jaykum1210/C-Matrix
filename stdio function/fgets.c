#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\bye.txt","r");
    if (a==NULL)
    {
        printf("Not found\n");
        return 0;
    }
    int num = 0;
    char z[100];
    while (fgets(z,100,a)!=NULL)
    {
        num++;
    }
    printf("Number of lines = %d",num);
    fclose(a);
    return 0;
}