#include <stdio.h>

int main(){
    char a;
    printf("Enter character = ");
    scanf(" %c",&a);
    if (a>=65 && a<=90)
    {
        printf("Uppercase\n");
    }
    else if (a>=97 && a<=122)
    {
        printf("Lowercase\n");
    }
    else{
        printf("Not a Character\n");
    }
    return 0;
}