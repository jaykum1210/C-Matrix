#include <stdio.h>

int main(){
    char a[100];
    printf("Enter charcater = ");
    fgets(a,sizeof(a),stdin);
    printf("Character = %s",a);
    return 0;
}