#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\hii.txt","r");
    FILE *b = fopen("C:\\hello\\bye.txt","r");
    if (a == NULL || b==NULL)
    {
        printf("File not found\n");
    }
    char x = fgetc(a);
    char y[100];
    fgets(y,100,b);
    printf("Character = %c\n",x);
    printf("String = %s",y);
    _fcloseall();
}