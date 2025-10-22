#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    int x = 0;
    for (int i = 0; i < count; i++)
    {
        if (a[i]!=' ')
        {
            a[x]=a[i];
            x++;
        }
    }
    printf("String = %s",a);
    return 0;
}