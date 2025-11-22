#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    int pos;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    printf("Enter position = ");
    scanf("%d",&pos);
    printf("Character at position %d = %c\n",pos,a[pos]);
    return 0;
}