#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers = ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is greater than %d\n",a,b);
    }
    else if (a<b)
    {
        printf("%d is greater than %d\n",b,a);
    }
    else{
        printf("Both numbers are Equal %d\n",a);
    }
    return 0;
    
}