#include <stdio.h>
#include <string.h>

void cat(char a[], char b[], int len1, int len2,int i){
    if (i==len2)
    {
        a[len1] = '\0';
        return;
    }
    a[len1] = b[i];
    return cat(a,b,len1+1,len2,i+1);
}

int main(){
    char a[100], b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string = ");
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
    int i = 0;
    cat(a,b,len1,len2,i);
    printf("String = %s",a);
    return 0;
}