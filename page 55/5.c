#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],max ,maxlen;
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        if (i==0)
        {
            max = b[i];
            maxlen = i;
        }
        
        if (b[i]>=max)
        {
            max = b[i];
            maxlen= i;
        }
    }
    printf("Maximum number at index %d = %d\n",maxlen,max);
    return 0;
}