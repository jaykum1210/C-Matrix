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
    int x = 0,num=0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]=='@')
        {
            num = i;
            break;
        }
    }
    for (int i = num+1; i < len; i++)
    {
        a[x++] = a[i];
    }
    a[x]='\0';
    printf("String = %s",a);
    return 0;
}