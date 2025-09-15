#include <stdio.h>

int main(){
    int a;
    printf("Enter element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int min = b[0],sec = b[1],count;
    for (int i = 0; i < a; i++)
    {
        if (min>b[i])
        {
            min = b[i];
            count = i;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (sec>b[i] & b[i]!=min)
        {
            sec = b[i];
        }
    }
    printf("Second smallest number = %d\n",sec);
    return 0;
}