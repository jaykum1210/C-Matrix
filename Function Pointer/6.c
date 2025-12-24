#include <stdio.h>

void message(){
    printf("Void Function");
}

int main(){
    void (*fp)();
    fp = message;
    fp();
    return 0;
}