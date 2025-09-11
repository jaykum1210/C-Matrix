#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j =1; j<=a; j++)
        {
            int top = i;
            int left = j;
            int bottom = a - i + 1;
            int right = a - j + 1;
            int layer = top;
            if (left<layer)
            {
                layer = left;
            }
            if (bottom<layer)
            {
                layer = bottom;
            }
            if (right < layer)
            {
                layer = right;
            }
            if (layer%2 == 1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}