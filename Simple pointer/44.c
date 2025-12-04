#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    char *p = a;
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if ((*p)!=' ')
        {
            a[x++] = a[i];
        }
        p++;
    }
    a[x] = '\0';
    printf("String = %s\n",a);
    return 0;
}