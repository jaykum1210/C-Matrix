#include <stdio.h>
#include <string.h>

void word(char a[], char b, char c, int len){
    for (int i = 0; i < len; i++)
    {
        if (a[i]==b)
        {
            a[i] = c;
        }
    }
}

int main(){
    char a[100],b,c;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    scanf("%c",&b);
    printf("Enter new character = ");
    scanf(" %c",&c);
    int len = strlen(a);
    word(a,b,c,len);
    printf("String = %s",a);
    return 0;
}