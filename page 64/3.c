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
    }
    
    int d = strlen(b);
    if (b[d-1] == '\n')
    {
        b[d-1] = '\0';
        d--;
    }
    
    for (int i = 0; i < d; i++)
    {
        a[i] = b[i];
    }
    int e = strlen(a);
    a[e] = '\0';
    printf("%s",a);
    return 0;
}