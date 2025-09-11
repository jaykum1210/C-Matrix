#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "Hello";
    char b[100];
    printf("String = %s\n",strcpy(b,a));
    return 0;
}