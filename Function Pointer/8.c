#include <stdio.h>

void message(){
    printf("No Parameters");
}

int main(){
    void (*fp)();
    fp = message;
    fp();
    return 0;
}