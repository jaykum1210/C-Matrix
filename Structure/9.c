#include <stdio.h>

struct student
{
    int a;
    char b[100];
};

int main(){
    struct student s;
    printf("size = %zu\n",sizeof(s));
    return 0;
}