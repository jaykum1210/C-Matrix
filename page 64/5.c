#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100],c[100];
    printf("Enter first string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string = ");
    fgets(b,sizeof(b),stdin);
    int d = strlen(a);
    if (a[d-1]=='\n')
    {
        a[d-1] = '\0';
        d--;
    }
    int e = strlen(b);
    if (b[e-1]=='\n')
    {
        b[e-1]='\0';
        e--;
    }
    for (int i = 0; i < d+e; i++)
    {
        if (i<d)
        {
            c[i] = a[i];
        }
        else{
            c[i] = b[i-d];
        }
    }
    c[d+e] = '\0';
    printf("String = %s",c);
    return 0;
}