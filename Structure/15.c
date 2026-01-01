#include <stdio.h>

struct boolean
{
    int status;
};

int main(){
    struct boolean b;
    printf("Enter status = ");
    scanf("%d",&b.status);
    printf("Status = %d\n",b.status);
    return 0;
}