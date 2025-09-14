#include <stdio.h>

int main(){
    int b =0,time,c;
    float pay,total=0;
    while (b<10)
    {
        printf("Time of Employee work = ");
        scanf("%d",&time);
        if (time>40)
        {
            c = time-40;
            pay = 12*c;
            printf("Payment of extra hours = %0.2f\n",pay);
            total +=pay;
        }
        b++;
    }
    printf("Total payment = %0.2f\n",total);
    return 0;
}