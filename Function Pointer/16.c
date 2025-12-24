#include <stdio.h>

void ch(char a){
    printf("%c\n",a);
}

int main(){
    char a = 'A';
    void (*fp)(char);
    fp = ch;
    fp(a);
    return 0;
}