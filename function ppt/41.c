#include <stdio.h>

int sum(int b[], int a){
    int num = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i]%2==0)
        {
            num+=b[i];
        }
    }
    return num;
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int c = sum(b,a);
    printf("Sum = %d\n",c);
    return 0;
}