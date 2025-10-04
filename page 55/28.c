#include <stdio.h>

int main(){
    int a;
    printf("Enter number of people = ");
    scanf("%d",&a);
    int b[a],even=0,odd=0;
    printf("Enter age of %d people = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        if (b[i]%2==0)
        {
            even+=b[i];
        }
        else{
            odd+=b[i];
        }
    }
    printf("Sum of all even ages = %d\n",even);
    printf("Sum of all odd ages = %d\n",odd);
    return 0;
}