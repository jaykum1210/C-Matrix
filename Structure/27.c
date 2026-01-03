#include <stdio.h>

struct number {
    int num;
};

int main(){
    struct number n[3] = {10,20,30};
    printf("Numbers = ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",n[i].num);
    }
    return 0;
}