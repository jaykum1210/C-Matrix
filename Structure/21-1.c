#include <stdio.h>

enum color{
    RED
};

int main(){
    enum color c = RED;
    if (c==RED)
    {
        printf("RED\n");
    }
    return 0;   
}