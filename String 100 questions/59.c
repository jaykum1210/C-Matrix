#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch,b;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    printf("Enter character = ");
    scanf(" %c",&ch);
    printf("Enter new character = ");
    scanf(" %c",&b);
    for (int i = 0; i < len; i++)
    {
        if (a[i]==ch)
        {
            a[i] = b;
            break;
        }
    }
    printf("String = %s",a);
    return 0;
}