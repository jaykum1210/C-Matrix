#include <stdio.h>

int main(){
    int quantity,a=0;
    float price,bill=0;
    printf("Enter Quantity = ");
    scanf("%d",&quantity);
    while (a<quantity)
    {
        printf("Enter price = ");
        scanf("%f",&price);
        if (price>1000)
        {
            price = price - 0.1*price;
        }
        bill +=price;
        a++;
    }
    printf("Total bill = %0.2f\n",bill);
    return 0;
}