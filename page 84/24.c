#include <stdio.h>

int rec(int b[], int a, char ch){
    int sum = 0;
    if (ch=='+')
    {
        for (int i = 0; i < a; i++)
        {
            if (b[i]>0)
            {
                sum+=b[i];
            }
        }
    }
    else{
        for (int i = 0; i < a; i++)
        {
            if (b[i]<0)
            {
                sum+=b[i];
            }
        }
    }
    return sum;
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
    char ch;
    printf("Enter character = ");
    scanf(" %c",&ch);
    int sum = rec(b,a,ch);
    printf("Sum = %d\n",sum);
    return 0;
}