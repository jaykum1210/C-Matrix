#include <stdio.h>

int satis(int a, int b, int c, int d){
    int e = a*a*a + b*b*b* + c*c*c;
    if (e==(d*d*d))
    {
        return 0;
    }
    return -1;
}

int main(){
    int a,b,c,d;
    printf("Enter four number = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int num = satis(a,b,c,d);
    if (num==0)
    {
        printf("Satisfied\n");
    }
    else{
        printf("Not Sarisfied\n");
    }
    return 0;
}