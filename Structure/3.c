#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
};

int main(){
    struct Employee e;
    printf("Enter id = ");
    scanf("%d",&e.id);
    getchar();
    printf("Enter name = ");
    fgets(e.name,sizeof(e.name),stdin);
    printf("Id = %d\n",e.id);
    printf("Name = %s",e.name);
    return 0;
}