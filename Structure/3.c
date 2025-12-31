#include <stdio.h>

struct employee
{
    int id;
    float salary;
};

int main(){
    struct employee e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter id = ");
        scanf("%d",&e[i].id);
        printf("Enter salary = ");
        scanf("%f",&e[i].salary);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Id = %d\n",e[i].id);
        printf("Salary = %0.2f\n",e[i].salary);
    }
    return 0;
}