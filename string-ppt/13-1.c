#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter character = ");
    scanf("%s",a);
    int b = strlen(a);
    printf("Number of Character = %d\n",b);
    return 0;
}