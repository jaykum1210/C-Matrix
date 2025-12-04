#include <stdio.h>
#include <string.h>

int main(){
    const char a[100] = "hello";
    int len = strlen(a);
    char const *p = a;
    for (int i = 0; i < len; i++)
    {
        printf("%c ",(*p));
        p++;
    }
    return 0;
}