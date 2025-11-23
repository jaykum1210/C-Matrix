#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\hii.txt","r");
    if (a==NULL)
    {
        printf("Not Found\n");
        return 0;
    }
    char ch = fgetc(a);
    printf("Character = %c\n",ch);
    fclose(a);
    printf("Closed\n");
    char z = fgetc(a);
    if (z==EOF)
    {
        printf("No character\n");
        return 0;
    }
    
    printf("Character = %c\n",z);
    return 0;
}