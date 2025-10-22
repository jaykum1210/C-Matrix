#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i] = a[i]-32;
        }
    }
    printf("String = %s",a);
    return 0;
}