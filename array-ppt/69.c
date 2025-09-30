#include <stdio.h>

int main(){
    int a;
    printf("Enter element = ");
    scanf("%d",&a);
    int b[a],peak;
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    peak = b[0];
    for (int i = 1; i < a-1; i++)
    {
        if (b[i-1]>peak)
        {
            peak = b[i-1];
        }
        if (b[i+1]>peak)
        {
            peak = b[i+1];
        }
    }
    printf("Peak value = %d\n",peak);
    return 0;
}