#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\bye.txt","r");
    if (a == NULL)
    {
        printf("Not Found\n");
        return 0;
    }
    char ch;
    while ((ch = fgetc(a))!=EOF)
    {
        printf("%c\n",ch);
    }
    if (feof(a))
    {
        printf("End\n");
        return 0;
    }
    printf("Not End\n");
    return 0;
}