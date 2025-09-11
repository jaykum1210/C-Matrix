#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d %d %d",&a,&b,&c);
    int gr = a;
    if (b>gr)
    {
        gr = b;
    }
    if (c>gr)
    {
        gr = c;
    }
    printf("Greatest number = %d\n",gr);
    return 0;
}