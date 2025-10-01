#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int found = 0;
    for (int i = 0; i < a-1; i++)
    {
        if (b[i+1]<b[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Not ascending order");
    }
    else{
        printf("ascending order");
    }
    return 0;
}