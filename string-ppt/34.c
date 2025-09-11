#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        if (a[i] == ' ')
        {
            a[i] = '-';
        }
        printf("%c",a[i]);
    }
    return 0;
}