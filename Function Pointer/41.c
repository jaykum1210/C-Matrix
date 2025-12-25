#include <stdio.h>

int asc(char a){
    int num = a;
    return num;
}

int main(){
    char a;
    printf("Enter character = ");
    scanf("%c",&a);
    int (*fp)(char);
    fp = asc;
    int num = fp(a);
    printf("ASCII value of %c = %d\n",a,num);
    return 0;
}