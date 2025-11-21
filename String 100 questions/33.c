#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch;
    int pos;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    scanf("%c",&ch);
    printf("Enter position = ");
    scanf("%d",&pos);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for (int i = len; i >=pos; i--)
    {
        a[i] = a[i-1];
    }
    len++;
    a[pos-1] = ch;
    printf("String = %s",a);
    return 0;
}