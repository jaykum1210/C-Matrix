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
    int x=0;
    for (int i = 0; i < count; i++)
    {
        if (a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='A' && a[i]!='E' && a[i]!='O' && a[i]!='I' && a[i]!='U')
        {
            a[x] = a[i];
            x++;
        }
    }
    a[x] = '\0';
    printf("String = %s",a);
    return 0;
}