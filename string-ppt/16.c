#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter character = ");
    scanf("%s",&a);
    int b = strlen(a);
    for (int i = 0; i <b ; i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}