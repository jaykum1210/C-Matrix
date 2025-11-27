#include <stdio.h>

void rec(int a){
    for (int i = 2; i <=a/2; i++)
    {
        int found = 0;
        if (a%i==0)
        {
            for (int j = 2; j<=i/2; j++)
            {
                if (i%j==0)
                {
                    found = 1;
                    break;
                }
            }
            if (found==0)
            {
                printf("%d ",i);
                a/=i;
            }
        }
    }
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    rec(a);
    return 0;
}