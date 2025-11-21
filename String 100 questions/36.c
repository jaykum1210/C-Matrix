#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100],min[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    int num=0,small=__INT_MAX__;
    for (int i = 0; i < len; i++)
    {
        num = 0;
        int x = 0;
        while (a[i]!=' ' && a[i]!='\0')
        {
            b[x++]=a[i];
            num++;
            i++;
        }
        b[x]='\0';
        if (num<small)
        {
            small = num;
            strcpy(min,b);
        }
    }
    printf("Smallest word = %s",min);
    return 0;
}