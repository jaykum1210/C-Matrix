#include <stdio.h>
#include <string.h>

char word(char a[], int len){
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if ((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
        {
            a[x++] = a[i];
        }
    }    
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    word(a,len);
    printf("String = %s",a);
    return 0;
}