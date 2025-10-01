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
    int c[a],t=0,found;
    for (int i = 0; i < a; i++)
    {
        found = 0;
        for (int j = i-1;j>=0;j--)
        {
            if (b[i]==b[j])
            {
                found = 1;
            }
        }
        if (found != 1)
        {
            c[t] = b[i];
            t++;
        }
    }
    int count;
    for (int i = 0; i < a; i++)
    {
        count=0;
        for (int j = 0; j <a; j++)
        {
            if (c[i]==b[j])
            {
                count++;
            }
        }
        c[i] = count;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",c[i]);
    }

    return 0;
}