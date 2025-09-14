#include <stdio.h>

int main(){
    int a,sum=0;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        sum+=b[i];
    }
    printf("Sum of all elements = %d\n",sum);
    return 0;
}