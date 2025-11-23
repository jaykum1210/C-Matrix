#include <stdio.h>
#include <string.h>

void up(char a[100],int len){
    for (int i = 0; i < len; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i] = a[i]-32;
        }
    }
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    up(a,len);
    printf("String = %s",a);
    return 0;
}