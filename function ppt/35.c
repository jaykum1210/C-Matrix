#include <stdio.h>
#include <string.h>

void down(char a[],int len){
    int i = 0;
    while (a[i]!='\0' && a[i]!='\n')
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i] = a[i]+32;
        }
        i++;
    }
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    down(a,len);
    printf("String = %s",a);
    return 0;
}