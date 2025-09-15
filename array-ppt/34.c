#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],c[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (c[i]!=0)
        {
            int count = 1;
            for (int j = i+1; j<a; j++)
            {
                if (b[i] == b[j])
                {
                    count++;
                }
            }
            c[i] = count;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d occures %d times\n",b[i],c[i]);
    }
    return 0;
}