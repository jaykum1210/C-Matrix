#include <stdio.h>

struct inner
{
    int day;
    int month;
};

struct outer
{
    struct inner i;
};

int main(){
    struct outer o;
    printf("Enter day = ");
    scanf("%d",&o.i.day);
    printf("Enter month = ");
    scanf("%d",&o.i.month);
    printf("Day = %d\n",o.i.day);
    printf("Month = %d\n",o.i.month);
    return 0;
}