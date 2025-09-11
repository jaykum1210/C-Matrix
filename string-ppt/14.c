#include <stdio.h>

int main(){
    int a;
    char b[100];
    printf("Enter Character = ");
    fgets(b,sizeof(b),stdin);
    printf("Enter position = ");
    scanf(" %d",&a);
    printf("Character = %c\n",b[a-1]);
    return 0;
}