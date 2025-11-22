#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\hii.txt","r");
    if (a==NULL)
    {
        printf("Not Found\n");
        return 0;
    }
    printf("Open\n");
    char ch = fgetc(a);
    char z[100];
    fgets(z,100,a);
    printf("First character = %c\n",ch);
    printf("File = %s",z);
    printf("File = %s",z);
    return 0;
}