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
    for (int i = 0; i < len; i++)
    {
        if (i==0 || a[i-1]==' ')
        {
            if (a[i]>='a' && a[i]<='z')
            {
                a[i]=a[i]-32;
            }
        }
    }
    printf("String = %s",a);
    return 0;
}