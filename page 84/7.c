#include <stdio.h>

int rec(int b[], int a){
    int max = 1;
    for (int i = 0; i < a-1; i++)
    {
        int num = 1;
        for (int j = 0; j < a-1; j++)
        {
            if (b[j]<b[j+1])
            {
                num++;
            }
            else{
                break;
            }
        }
        if (num>max)
        {
            max = num;
        }
    }
    return max;
}

int main(){
    int a;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int num = rec(b,a);
    printf("Number = %d\n",num);
    return 0;
}