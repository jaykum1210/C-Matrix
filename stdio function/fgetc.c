#include <stdio.h>

int main(){
    FILE *a = fopen("C:\\hello\\bye.txt","r");
    if (a == NULL)
    {
        printf("Not Found\n");
        return 0;
    }
    int num = 0;
    char z;
    while ((z=fgetc(a))!=EOF)
    {
        if (z=='a' || z=='e' || z=='i' || z=='o' || z=='u' || z=='A' || z=='E' || z=='I' || z=='O' || z=='U')
        {
            num++;
        }
    }
    printf("Number of vowels = %d",num);
    fclose(a);
    return 0;
}