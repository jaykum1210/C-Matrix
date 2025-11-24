#include <stdio.h>
#include <string.h>

void line(char a[], int len){
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if (!(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'))
        {
            a[x++] = a[i];
        }
    }
    a[x] = '\0';
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    line(a,len);
    printf("String = %s",a);
    return 0;
}