#include <stdio.h>

void rec(char a[], char b, char ch, int i){
    if (a[i]=='\n' || a[i]=='\0')
    {
        return;
    }
    if (a[i]==b)
    {
        a[i] = ch;
    }
    rec(a,b,ch,i+1);
}

int main(){
    char a[100],b,ch;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    scanf("%c",&b);
    printf("Enter new character = ");
    scanf(" %c",&ch);
    int i = 0;
    rec(a,b,ch,i);
    printf("String = %s",a);
    return 0;
}