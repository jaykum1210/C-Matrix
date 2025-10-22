#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter Character = ");
    char b = fgetc(stdin);
    int count=0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (a[i]==b)
        {
            a[i] = 'x';
        }
    }
    printf("String = %s",a);
    return 0;
}