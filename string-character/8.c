#include <stdio.h>

int main(){
    char a[100],b[100];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    printf("%s",a);
    printf("%s",b);
    return 0;
}