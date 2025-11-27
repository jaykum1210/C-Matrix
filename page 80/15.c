#include <stdio.h>
#include <string.h>

void co(char a[],char b[], int i){
    if (a[i]=='\n' || a[i]=='\0')
    {
        b[i] = '\0';
        return;
    }
    b[i] = a[i];
    return co(a,b,i+1);
}

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int i = 0;
    co(a,b,i);
    printf("String = %s",b);
    return 0;
}