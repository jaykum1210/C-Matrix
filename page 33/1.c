#include <stdio.h>

int main(){
    char a;
    int b;
    printf("Enter Gender = ");
    scanf("%c",&a);
    printf("Enter age = ");
    scanf("%d",&b);
    if (a == 'm' || a == 'M')
    {
        if (b>=90)
        {
            printf("Pension is 4000");
        }
        else if (b>=60)
        {
            printf("Pension is 6000");
        }
        else{
            printf("Pension is 0");
        }
    }
    else if(a== 'F' || a == 'f'){
        if (b>=90)
        {
            printf("Pension is 3000");
        }
        else if (b>=60)
        {
            printf("Pension is 5000");
        }
        else{
            printf("Pension is 0");
        }
    }
    else{
        printf("Enter valid gender M/F");
    }
    return 0;
}