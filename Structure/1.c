#include <stdio.h>

struct Student
{
    int roll;
    int marks;
};

int main(){
    struct Student s;
    printf("Enter roll Number = ");
    scanf("%d",&s.roll);
    printf("Enter Marks = ");
    scanf("%d",&s.marks);
    printf("Roll Numbber = %d\n",s.roll);
    printf("Marks = %d\n",s.marks);
    return 0;
}