#include <stdio.h>

int main(){
    int a;
    printf("Enter number of telephone calls = ");
    scanf("%d",&a);
    if (a<100)
    {
        printf("cost = %0.2f\n",0);
    }
    else if (a>100 && a<200)
    {
        printf("Cost = %0.2f\n",a*0.8);
    }
    else if (a>200 && a<500)
    {
        printf("Cost = %0.2f\n",a*1.0);
    }
    else{
        printf("Cost = %0.2f\n",a*1.2);
    }
    return 0;
}