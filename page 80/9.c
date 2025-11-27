#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter character = ");
    scanf("%c",&a);
    if (isdigit(a))
    {
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}