#include <stdio.h>
#include <string.h>

int main(){
    char a[100],ch,b;
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    printf("Enter Character = ");
    scanf(" %c",&ch);
    printf("Enter New Character = ");
    scanf(" %c",&b);
    for (int i = len-1; i >=0; i--)
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