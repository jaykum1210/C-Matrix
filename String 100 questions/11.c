#include <stdio.h>

int main(){
    char a[100],b,c;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter character = ");
    scanf(" %c",&b);
    getchar();
    printf("Enter new character = ");
    scanf(" %c",&c);
    int count = 0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (a[i]==b)
        {
            a[i] = c;
        }
    }
    printf("String = %s",a);
    return 0;
}