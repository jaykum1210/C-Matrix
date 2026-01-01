#include <stdio.h>

struct city
{
    char place[100];
};

int main(){
    struct city c;
    printf("Enter city = ");
    fgets(c.place,sizeof(c.place),stdin);
    printf("City = %s",c.place);
    return 0;
}