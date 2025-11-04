#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter first string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string = ");
    fgets(b,sizeof(b),stdin);
    int c = strlen(a);
    if (a[c-1]=='\n')
    {
        a[c-1] = '\0';
        c--;
    }
    int d = strlen(b);
    if (b[d-1]=='\n')
    {
        b[d-1] = '\0';
        d--;
    }
    for (int i = 0; i < d; i++)
    {
        a[c+i] = b[i];
    }
    a[c+d] = '\0';
    printf("String = %s",a);
    return 0;
}