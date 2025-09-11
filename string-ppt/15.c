#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter Character = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    printf("Character = %c\n",a[b-2]);
    return 0;
}