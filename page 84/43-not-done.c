#include <stdio.h>
#include <string.h>

void rec(char a[], char b[], int len1, int len2){
    
}

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter 2nd string = ");
    fgets(b,sizeof(b),stdin);
    int len1 = strlen(a);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    int len2 = strlen(b);
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    rec(a,b,len1,len2);
    printf("String = %s\n",a);
    printf("String = %s\n",b);
    return 0;
}