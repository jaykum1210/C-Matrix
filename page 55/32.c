#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],min=9999,max=-9999,minlen,maxlen;
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]<min)
        {
            min = b[i];
            minlen = i;
        }
        if (b[i]>max)
        {
            max = b[i];
            maxlen = i;
        }
    }
    printf("%d is maximum value at index %d\n",max,maxlen);
    printf("%d is minimum value at index %d\n",min,minlen);
    return 0;
}