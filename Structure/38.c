#include <stdio.h>

struct array
{
    int rollno;
    char name[100];
};

int main(){
    struct array a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Id = ");
        scanf("%d",&a[i].rollno);
        getchar();
        printf("Enter Name = ");
        fgets(a[i].name,sizeof(a[i].name),stdin);
    }
    int val;
    printf("Enter roll number want to search = ");
    scanf("%d",&val);
    for (int i = 0; i < 5; i++)
    {
        if (a[i].rollno==val)
        {
            printf("Record Found\n");
            printf("Id = %d\n",a[i].rollno);
            printf("Name = %s",a[i].name);
            return 0;
        }
    }
    printf("Record not found\n");
    return 0;
}