#include <stdio.h>

int main(){
    int a;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a],count=0,second = 1;
    printf("Enter elements = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int max=b[0],sec=b[1];
    for (int i = 0; i < a; i++)
    {
        if (b[i]>max)
        {
            max = b[i];
            count = i;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (i==count)
        {
            continue;
        }
        else{
            if (b[i]>sec)
            {
                sec = b[i];
                second = i;
            }   
        }
    }
    printf("Greatest number = %d at index %d\n",max,count);
    printf("Second greatest = %d at index %d\n",sec,second);
    return 0;
}