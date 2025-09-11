#include <stdio.h>

int main(){
    char a;
    printf("Enter character = ");
    scanf(" %c",&a);
    if (a>=65 && a<=90)
    {
        printf("Capital Letter");
    }
    else if (a>=97 && a<=122)
    {
        printf("Small letters");
    }
    else if (a>=48 && a<=57)
    {
        printf("Digit letter");
    }
    else{
        printf("Special Letter");
    }
    return 0;
}