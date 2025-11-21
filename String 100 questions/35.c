#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100],max[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    int num=0;
    int x = 0,y=0;
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for (int i = 0; i < len; i++)
    {
        x=0;
        num = 0;
        while (a[i]!=' ' && a[i]!='\0')
        {
            b[x++] = a[i];
            num++;
            i++;
        }
        b[x]='\0';
        if (num>y)
        {
            y = num;
            strcpy(max,b);
        }
    }
    printf("Greatest Word = %s",max);
    return 0;
}