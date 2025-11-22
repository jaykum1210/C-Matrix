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
    if (!((a[0]>='a' && a[0]<='z')|| (a[0]>='A' && a[0]<='Z') || (a[0]=='_')))
    {
        printf("Not Valid\n");
        return 0;
    }
    for (int i = 1; i < len; i++)
    {
        if (a[i]==' ' || !((a[i]>='a' && a[i]>='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]>='9')))
        {
            printf("Not Valid\n");
            return 0;
        }
    }
    printf("Valid\n");
    return 0;
}