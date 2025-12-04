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
    for (int i = 0; i < len; i++)
    {
        if ((*p)>='a' && (*p)<='z')
        {
            a[i]=a[i]-32;
        }
        else if ((*p)>='A' && (*p)<='Z')
        {
            a[i] = a[i]+32;
        }
        p++;
    }
    printf("String = %s",a);
    return 0;
}