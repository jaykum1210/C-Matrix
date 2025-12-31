#include <stdio.h>

struct Address
{
    char city[100];
};

struct Student {
    char name[100];
    struct Address add;
};

int main(){
    struct Student s;
    printf("Enter Name = ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter City = ");
    fgets(s.add.city,sizeof(s.add.city),stdin);
    printf("Name = %s",s.name);
    printf("Address = %s",s.add.city);
    return 0;
}