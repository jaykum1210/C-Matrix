#include <stdio.h>

int max(int a,int b){
    if (a>b)
    {
        return a;
    }
    else if (b>a)
    {
        return b;
    }
    else{
        return 0;
    }
}

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    int c = max(a,b);
    if (c == 0)
    {
        printf("Both are equale\n");
        return 0;
    }
    printf("Maximum number between %d and %d = %d\n",a,b,c);
    return 0;
}