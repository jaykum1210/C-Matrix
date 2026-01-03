#include <stdio.h>

struct student
{
    int id;
    char name[100];
};

int main(){
    struct student s[3];
    printf("Enter data of three students =\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Id = ");
        scanf("%d",&s[i].id);
        getchar();
        printf("Name = ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
    }
    printf("---------------------------Data---------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Id = %d\n",s[i].id);
        printf("Name = %s",s[i].name);
    }
    return 0;
}