#include <stdio.h>

int max(int a, int b, int c){
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d%d%d",&a,&b,&c);
    int num = max(a,b,c);
    printf("Maximum number = %d\n",num);
    return 0;
}