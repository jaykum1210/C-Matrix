#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter four number = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int gr = a;
    if (b>gr)
    {
        gr = b;
    }
    if(c>gr){
        gr = c;
    }
    if(d>gr){
        gr = d;
    }
    printf("Greatest Number = %d\n",gr);
    return 0;
}