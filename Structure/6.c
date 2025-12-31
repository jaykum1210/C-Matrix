#include <stdio.h>

typedef struct {
    int id;
    float salary;
} Employee;

int main(){
    Employee e = {10,10.11};
    printf("Id = %d\n",e.id);
    printf("Salary = %0.2f\n",e.salary);
    return 0;
}