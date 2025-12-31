#include <stdio.h>

struct book
{
    char name[100];
    int price;
};


int main(){
    struct book b;
    printf("Enter name = ");
    fgets(b.name,sizeof(b.name),stdin);
    printf("Enter price = ");
    scanf("%d",&b.price);
    printf("Name = %s",b.name);
    printf("Price = %d\n",b.price);
    return 0;
}