#include <stdio.h>

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elmenets = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int count = 0;
    int (*f)[a];
    f = &b;
    for (int i = 0; i < a; i++)
    {
        if ((*f)[i]%2==0)
        {
            count++;
        }
    }
    printf("Even Number = %d\n",count);
    return 0;
}