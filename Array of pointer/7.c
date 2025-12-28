#include <stdio.h>
#include <string.h>

int main(){
    char *a[] = {
        "Hello",
        "C Programming",
        "Bye"
    };
    int n = 3;
    printf("Length of string = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",strlen(a[i]));
    }
    return 0;
}