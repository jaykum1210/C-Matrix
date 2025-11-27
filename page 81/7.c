#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter character = ");
    scanf("%c",&a);
    a = toupper(a);
    printf("Charcter = %c",a);
    return 0;
}