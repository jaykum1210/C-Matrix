#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        if (a[count]>='a' && a[count]<='z')
        {
            a[count] = a[count] - 32;
        }
        else if (a[count]>='A' && a[count]<='Z')
        {
            a[count] = a[count] + 32;
        }
        count++;
    }
    printf("String = %s",a);
    return 0;
}