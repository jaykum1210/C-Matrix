#include <stdio.h>

int main(){
    char a;
    printf("Enter character = ");
    scanf(" %c",&a);
    if (a>=65 && a<=90)
    {
        printf("Character = %c\n",a+32);
    }
    else{
        printf("Character = %c\n",a-32);
    }
    return 0;
}