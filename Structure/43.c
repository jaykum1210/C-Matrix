#include <stdio.h>

struct character
{
    char a;
};

int main(){
    struct character c[3];
    printf("Enter three characters = ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%c",&c[i].a);
        getchar();
    }
    printf("Characters = ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c ",c[i].a);
    }
    return 0;
}