#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int i = 0,j = 0;
    while (a[i]==' ')
    {
        i++;
    }
    while (a[i]!='\0')
    {
        a[j++] = a[i++];
    }
    a[j] = '\0';
    printf("String = %s",a);
    return 0;
}