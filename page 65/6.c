#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int j = 0;
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        if (!(a[i]==' ' && a[i+1]==' '))
        {
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
    printf("String = %s",a);
    return 0;
}