#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    int pos;
    printf("Enter position = ");
    scanf("%d",&pos);
    for (int i = pos-1; i < len; i++)
    {
        a[i] = a[i+1];
    }
    len--;
    printf("String = %s",a);
    return 0;
}