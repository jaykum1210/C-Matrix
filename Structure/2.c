#include <stdio.h>

struct Employee
{
    int Id;
    int salary;
};

int main()
{
    struct Employee s = {1,2500};
    printf("Id = %d\n", s.Id);
    printf("salary = %d\n", s.salary);
    return 0;
}