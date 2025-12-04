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
    char b;
    printf("Enter character = ");
    scanf("%c",&b);
    int count = 0;
    char *p = a;
    for (int i = 0; i < len; i++)
    {
        if ((*p)==b)
        {
            count++;
        }
        p++;
    }
    printf("Frequency of \'%c\' = %d\n",b,count);
    return 0;
}