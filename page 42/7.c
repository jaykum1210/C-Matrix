#include <string.h>
#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("number of Character before Enter = %d\n",strlen(a)-1);
    return 0;
}