#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int x=0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]!='.' && a[i]!='!' && a[i]!='?')
        {
            a[x++] = a[i];
        }
    }
    a[x]='\0';
    printf("String = %s",a);
    return 0;
}