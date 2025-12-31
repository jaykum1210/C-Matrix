#include <stdio.h>

struct student
{
    int id;
    float marks;
};

int main(){
    struct student s;
    printf("Enter id = ");
    scanf("%d",&s.id);
    printf("ENter marks = ");
    scanf("%f",&s.marks);
    printf("Id = %d\n",s.id);
    printf("Marks = %0.2f\n",s.marks);
    return 0;
}