#include <stdio.h>

struct address
{
    char city[100];
};

struct employee
{
    int num;
    struct address add;
};

int main(){
    struct employee e;
    printf("Enter address = ");
    fgets(e.add.city,sizeof(e.add.city),stdin);
    printf("Address = %s",e.add.city);
    return 0;
}