#include <stdio.h>
#include <ctype.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int i = 0;
    while (a[i]!='\n' && a[i]!='\0')
    {
        a[i] = toupper(a[i]);
        i++;
    }
    printf("String = %s",a);
    return 0;
}