#include <stdio.h>

int main(){
    int a,left,right;
    printf("Enter elements = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int in;
    for (int i = 1; i < a-1; i++)
    {
        left = 0,right = 0;
        for (int j = i-1; j>=0; j--)
        {
            left +=b[i];
        }
        for (int j = i+1; j<a; j++)
        {
            right +=b[i];
        }
        if (left==right)
        {
            in = i;
            break;
        }
    }
    printf("Index = %d\n",in);
    return 0;
}