#include <stdio.h>
#include <string.h>

int main(){
    char a[50],b[50];
    printf("Enter first string = ");
    scanf(" %s",a);
    printf("Enter second string = ");
    scanf(" %s",b);
    int c = strcmp(a,b);
    if (c==0)
    {
        printf("Equale");
    }
    else{
        printf("Not equale");
    }
    return 0;
}