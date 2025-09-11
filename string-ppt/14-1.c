#include <stdio.h>

int main(){
    char a[100];
    printf("Enter character = ");
    fgets(a,sizeof(a),stdin);
    printf("First position = %c",a[0]);
    return 0;
}