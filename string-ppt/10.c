#include <stdio.h>

int main(){
    char a;
    printf("Enter character = ");
    scanf(" %c",&a);
    if (a>=48 && a<=57)
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}