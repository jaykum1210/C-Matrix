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
    char *p = a;
    char *p2 = &a[len-1];
    while (p<p2)
    {
        char temp = *p;
        *p = *p2;
        *p2 = temp;
        p++;
        p2--;
    }
    printf("String = %s",a);
    return 0;
}