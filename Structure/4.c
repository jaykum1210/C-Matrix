#include <stdio.h>

struct product
{
    float price;
};

int main(){
    struct product p = {1000};
    printf("Price = %0.2f\n",p.price);
    return 0;
}