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
    printf("First character = %c",ch);
    return 0;
}