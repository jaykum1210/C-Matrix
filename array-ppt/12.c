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
    int max = b[0],sec = b[1],c;
    for (int i = 0; i < a; i++)
    {
        if (max<b[i])
        {
            max = b[i];
            c = i;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (i==c)
        {
            continue;
        }
        else if (sec<b[i])
        {
            sec = b[i];
        }
    }
    printf("Second largest = %d\n",sec);
    return 0;
}