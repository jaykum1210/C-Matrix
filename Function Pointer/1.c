#include <stdio.h>

void message(){
    printf("Hello World\n");
}

int main(){
    void (*fp)();
    fp = message;
    fp();
    return 0;
}