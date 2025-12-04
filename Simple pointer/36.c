#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b;
    printf("Enter position = ");
    scanf("%d",&b);
    char *p = &a[b-1];
    printf("%d character = %c\n",b,*p);
    return 0;
}