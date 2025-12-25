#include <stdio.h>

void pri(int a){
    for (int i = 2; i <= a/2; i++)
    {
        if (a%i==0)
        {
            printf("Not a Prime Number\n");
            return;
        }
    }
    printf("Prime Number\n");
}

void per(int a){
    int sum = 1;
    int ori = a;
    for (int i = 2; i <=a/2; i++)
    {
        if (a%i==0)
        {
            sum+=i;
        }
    }
    if (sum==ori)
    {
        printf("Perfetc number\n");
    }
    else{
        printf("Not Perfect Number\n");
    }
}

void arm(int a){
    int sum = 0;
    int ori = a;
    while (a>0)
    {
        int b = a%10;
        sum+=(b*b*b);
        a/=10;
    }
    if (sum==ori)
    {
        printf("Armstring Number\n");
    }
    else{
        printf("Not a Armstring Number\n");
    }
}

int main(){
    int a,option=0;
    void (*fp)(int);
    while (option!=4)
    {
        printf("Enter number = ");
        scanf("%d",&a);
        printf("1. Prime Number\n");
        printf("2. Perfect number\n");
        printf("3. Armstring Number\n");
        printf("4. Exit\n");
        printf("Enter option = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            fp = pri;
            break;
        case 2:
            fp = per;
            break;
        case 3:
            fp = arm;
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
        fp(a);
    }
    return 0;
}