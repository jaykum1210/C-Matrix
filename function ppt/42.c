#include <stdio.h>

int sum(int b[], int a){
    int temp = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]%2!=0)
        {
            temp+=b[i];
        }
    }
    return temp;
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int c = sum(b,a);
    printf("Sum = %d\n",c);
    return 0;
}