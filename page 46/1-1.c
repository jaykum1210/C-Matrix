#include <stdio.h>

int main(){
    int a;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a],count = 0;
    printf("Enter elements = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int max = b[0];
    for (int i = 1; i < a; i++)
    {
        if (max<b[i])
        {
            max = b[i];
            count++;
        }
    }
    printf("Largest value is at index value %d = %d\n",count,max);
    return 0;
}