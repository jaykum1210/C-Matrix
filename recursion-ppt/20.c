#include <stdio.h>
#include <string.h>

void rev(char a[], int len, int i){
    if (i==len/2)
    {
        return;
    }
    char temp = a[i];
    a[i] = a[len-i-1];
    a[len-i-1] = temp;
    return rev(a,len,i+1);
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    
    int i = 0;
    rev(a,len,i);
    printf("String = %s",a);
    return 0;
}