#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter string = ");
    scanf("%c",&a);
    if (isalnum(a))
    {
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}