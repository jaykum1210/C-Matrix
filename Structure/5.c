#include <stdio.h>

struct product
{
    float price;
};

int main(){
    struct product p;
    printf("Enter price = ");
    scanf("%f",&p.price);
    printf("Price = %0.2f\n",p.price);
    return 0;
}