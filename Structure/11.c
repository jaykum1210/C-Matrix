#include <stdio.h>

struct marks
{
    int a;
};

int main(){
    struct marks m1,m2,m3,m4,m5;
    printf("Enter marks of Maths = ");
    scanf("%d",&m1.a);
    printf("Enter marks of Science = ");
    scanf("%d",&m2.a);
    printf("Enter marks of SST = ");
    scanf("%d",&m3.a);
    printf("Enter marks of English = ");
    scanf("%d",&m4.a);
    printf("Enter marks of Hindi = ");
    scanf("%d",&m5.a);
    float avg = (m1.a+m2.a+m3.a+m4.a+m5.a)/5;
    printf("Average = %0.2f\n",avg);
    return 0;
}