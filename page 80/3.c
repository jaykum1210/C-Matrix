#include <stdio.h>

void up(char a[], int i){
    if (a[i]=='\n' || a[i]=='\0')
    {
        return;
    }
    if (a[i]>='a' && a[i]<='z')
    {
        a[i] = a[i]-32;
    }
    up(a,i+1);
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int i = 0;
    up(a,i);
    printf("String = %s",a);
    return 0;
}