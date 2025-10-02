#include <stdio.h>

int main(){
    int a;
    printf("Enter number of students = ");
    scanf("%d",&a);
    int roll[a],marks[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter roll number = ");
        scanf("%d",&roll[i]);
        printf("Enter marks of roll number %d = ",roll[i]);
        scanf("%d",&marks[i]);
    }
    int user,num;
    printf("Enter user roll number = ");
    scanf("%d",&user);
    for (int i = 0; i < a; i++)
    {
        if (user == roll[i])
        {
            num = i;
        }
        
    }
    printf("Marks = %d\n",marks[num]);
    return 0;
}