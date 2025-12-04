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
    int count = 0;
    char *p = a;
    for (int i = 0; i < len; i++)
    {
        if ((*p)>='0' && (*p)<='9')
        {
            count++;
        }
        p++;
    }
    printf("Number of digits = %d\n",count);
    return 0;
}