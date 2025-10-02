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
    int found;
    for (int i = 0; i < a; i++)
    {
        found = 0;
        for (int j = i+1; j<a; j++)
        {
            if (b[i]==b[j])
            {
                found = 1;
                break;
            }
        }
        if (found==1)
        {
            printf("Present\n");
            break;
        }
    }
    if (found !=1)
    {
        printf("Not present\n");
    }
    
}