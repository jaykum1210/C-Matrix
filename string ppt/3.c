#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 0,x=0;
    while (a[x]!='\n')
    {
        count++;
        x++;
    }
    
    char b[100];
    for (int i = 0; i < x; i++)
    {
        b[i] = a[i];
    }
    b[x] = '\0';
    printf("copied string = %s",b);
    return 0;
}