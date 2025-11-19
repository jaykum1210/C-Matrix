#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 0,x=0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (!(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='i' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'))
        {
            a[x++] = a[i];
        }
    }
    a[x] = '\0';
    printf("String = %s",a);
    return 0;
}