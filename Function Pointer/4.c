#include <stdio.h>

void message(){
    printf("Function Assigned");
}

int main(){
    void (*fp)();
    fp = message;
    fp();
    return 0;
}